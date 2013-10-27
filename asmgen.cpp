#include "asmgen.h"
#include "Y_TAB.H"
#include <QMap>

#include <QDebug>

asmgen::asmgen(SymbolTable *sym, stream_base *out)
{
    this->sym = sym;
    this->out = out;
}

void asmgen::data_out()
{
    out->putLine(".DATA");
    out->putLine("ADDOV\tDB\t\"Error: Overflow en suma.\",0");
    out->putLine("MULOV\tDB\t\"Error: Overflow en multiplicacion.\",0");
    QList<QString> names = sym->keys();
    for (int i=0; i<names.size(); i++)
    {
        Attribute* aux = sym->value(names.at(i));
        if(aux->type == "long")
        {
            out->putLine("_"+aux->lexema+"\tDD\t?");
        }
        else if(aux->type == "Str")
        {
            out->putLine("STR"+QString::number(i)+"\tDB\t"+aux->lexema+",0");
        }
        else if(aux->type == "Cte")
        {
            out->putLine("_"+aux->lexema+"\tDD\t"+aux->lexema);
        }
    }
}

void asmgen::init()
{
    out->putLine(".386");
    out->putLine(".model flat, stdcall");
    out->putLine("option casemap :none");
    out->putLine("include \\masm32\\include\\windows.inc");
    out->putLine("include \\masm32\\include\\kernel32.inc");
    out->putLine("include \\masm32\\include\\user32.inc");
    out->putLine("includelib \\masm32\\lib\\kernel32.lib");
    out->putLine("includelib \\masm32\\lib\\user32.lib");
}

void asmgen::generate(QVector<rp_node_t> * rev_polish)
{
    init();
    data_out();
    QVector<int> v;
    int A,B,r = 0;
    QString As,Bs;
    QString reg [] = {"EBX", "ECX", "EAX", "EDX"};
    int used[4] = {0,0,0,0};
    QMap<int, QString> cmp; // jump on fail
    cmp.insert('<',"JGE");
    cmp.insert(LEQ,"JG");
    cmp.insert(EQU,"JNE");
    cmp.insert(NEQ,"JE");
    cmp.insert('>',"JLE");
    cmp.insert(GEQ,"JL");
    out->putLine(".CODE");
    out->putLine("start:");
    for(int i = 0; i < rev_polish->size(); i++)
    {
        rp_node_t n = rev_polish->value(i);
        switch (n.type) {
        case KIND_SYMBOL:
        case KIND_ADDR:
            v.push_back(n.val);
            break;
        case KIND_CALL:
            A = v.last();
            v.removeLast();
            out->putLine("\tCALL _"+sym->value(A)->lexema);
            // pop
            break;
        case KIND_ENTRY:
            out->putLine("_"+sym->value(i)->lexema+":");
            break;
        case KIND_JUMP:
            A = v.last();
            v.removeLast();
            out->putLine("\tJMP LABEL_"+QString::number(A));
            break;
        case KIND_JUMPC:
            A = v.last();
            v.removeLast();
            B = v.last();
            v.removeLast();
            out->putLine("\t"+cmp.value(B)+" LABEL_"+QString::number(A));
            break;
        case KIND_LABEL:
            out->putLine("LABEL_"+QString::number(i)+":");
            break;
        case KIND_OPERATOR:
            A = v.last();
            v.removeLast();
            B = v.last();
            v.removeLast();
            if(A<0){ As = reg[-A-1]; used[-A-1] = 0;}
            else    As = "_"+sym->value(A)->lexema;
            if(B<0){ Bs = reg[-B-1]; used[-B-1] = 0;}
            else    Bs = "_"+sym->value(B)->lexema;
            switch (n.val) {
            case '=':
                if(B<0) // se copia de registro
                    out->putLine("\tmov "+As+","+Bs);
                else // se copia memoria a memoria
                {
                    out->putLine("\tmov EAX,"+Bs);
                    out->putLine("\tmov "+As+",EAX");
                }
                break;
            case '+':
                if(A<0) // si A en registro
                {
                    out->putLine("\tadd "+As+","+Bs);
                    used[-A-1] = v.size();
                    v.push_back(A);
                }
                else if(B<0) // si B en registro
                {
                    out->putLine("\tadd "+Bs+","+As);
                    used[-B-1] = v.size();
                    v.push_back(B);
                }
                else // todos en memoria
                {
                    while(r<4&&used[r]) r++;
                    out->putLine("\tmov "+reg[r]+","+As);
                    out->putLine("\tadd "+reg[r]+","+Bs);
                    used[-r-1] = v.size();
                    v.push_back(-r-1);
                }
                out->putLine("\tJO ADDOV_ERROR");
                break;
            case '-':
                break;
            case '*':
                if(A==-3) // si A en EAX
                {
                    if(used[3])
                    {
                        while(r<2&&used[0])r++;
                        if(r<2)
                        {
                            out->putLine("\tMOV "+reg[r]+","+reg[3]);
                            used[r] = used[3];
                            v.remove(used[r]);
                            v.insert(used[r],-r-3);
                        }
                        else
                            qDebug() << "* regs overflow!!!";
                    }
                    out->putLine("\tIMUL "+As+","+Bs);
                    used[-A-1] = v.size();
                    v.push_back(A);
                }
                else if(B==-3) // si B en registro
                {
                    if(used[3])
                    {
                        while(r<2&&used[0])r++;
                        if(r<2)
                        {
                            out->putLine("\tMOV "+reg[r]+","+reg[3]);
                            used[r] = used[3];
                            v.remove(used[r]);
                            v.insert(used[r],-r-3);
                        }
                        else
                            qDebug() << "* regs overflow!!!";
                    }
                    out->putLine("\tIMUL "+Bs+","+As);
                    used[-B-1] = v.size();
                    v.push_back(B);
                }
                else // todos en memoria
                {
                    // TODO:
                    while(r<4&&used[r]) r++;
                    out->putLine("\tmov "+reg[r]+","+As);
                    out->putLine("\tIMUL "+reg[r]+","+Bs);
                    used[-r-1] = v.size();
                    v.push_back(-r-1);
                }
                out->putLine("\tJO MULOV_ERROR");
                break;
            case '/':
                break;
            case '<':
            case '>':
            case EQU:
            case NEQ:
            case GEQ:
            case LEQ:
                if(A<0||B<0) // Alguno esta en un registro.
                    out->putLine("\tcmp "+As+","+Bs);
                else // ambos en memoria
                {
                    out->putLine("\tmov EAX,"+As);
                    out->putLine("\tcmp EAX,"+Bs);
                }
                v.push_back(n.val);
            default:
                break;
            }
            break;
        case KIND_PRINT:
            A = v.last();
            v.removeLast();
            out->putLine(QString()+"\tinvoke MessageBox, NULL, addr "+"STR"+QString::number(A)+", addr "+"STR"+QString::number(A)+", MB_OK");
            break;
        case KIND_RET:
            A = v.last();
            v.removeLast();
            out->putLine("\tPUSH _"+A);
            out->putLine("\tRET");
        default:
            break;
        }
    }
    out->putLine("");
    out->putLine("\tJMP finally");
    out->putLine("ADDOV_ERROR:");
    out->putLine(QString("\tinvoke MessageBox, NULL, addr ADDOV, addr ADDOV, MB_OK"));
    out->putLine("\tJMP finally");
    out->putLine("MULOV_ERROR:");
    out->putLine(QString("\tinvoke MessageBox, NULL, addr MULOV, addr MULOV, MB_OK"));
    out->putLine("finally:");
    out->putLine("invoke ExitProcess, 0");
    out->putLine("end start");
}
