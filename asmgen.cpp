#include "asmgen.h"
#include "Y_TAB.H"
#include <QMap>

#include <QDebug>

asmgen::asmgen(SymbolTable *sym, stream_base *out)
{
    this->sym = sym;
    this->out = out;
    v.append(54391);

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
    out->putLine(".CODE");
    out->putLine("start:");


    QMap<int, QString> cmp; // jump on fail
    cmp.insert('<',"JGE");
    cmp.insert(LEQ,"JG" );
    cmp.insert(EQU,"JNE");
    cmp.insert(NEQ,"JE" );
    cmp.insert('>',"JLE");
    cmp.insert(GEQ,"JL" );

    for(int i = 0; i < rev_polish->size(); i++)
    {
        r=0;
        rp_node_t n = rev_polish->value(i);
        switch (n.type) {
        case KIND_SYMBOL:
        case KIND_ADDR:
            v.push_back(n.val);
            break;
        case KIND_CALL:
            A = v.last();
            v.pop_back();
            out->putLine("\tSUB ESP, 4");
            out->putLine("\tPUSH EBP");
            out->putLine("\tMOV EBP,ESP");
            for(int RR = 0; RR < 4; RR++) if(used[RR]) out->putLine("\tPUSH "+reg[RR]);
            out->putLine("\tCALL _"+sym->value(A)->lexema);
            for(int RR = 3; RR >= 0; RR--) if(used[RR]) out->putLine("\tPOP "+reg[RR]);
            out->putLine("\tPOP EBP");
            while(r<4&&used[r]) r++;
            out->putLine("\tPOP "+reg[r]);
            used[r] = v.size();
            v.push_back(-r-1);
            break;
        case KIND_ENTRY:
            out->putLine("_"+sym->value(n.val)->lexema+":");
            break;
        case KIND_JUMP:
            A = v.last();
            v.pop_back();
            out->putLine("\tJMP LABEL_"+QString::number(A));
            break;
        case KIND_JUMPC:
            A = v.last();
            v.pop_back();
            B = v.last();
            v.pop_back();
            out->putLine("\t"+cmp.value(B)+" LABEL_"+QString::number(A));
            break;
        case KIND_LABEL:
            out->putLine("LABEL_"+QString::number(i)+":");
            break;
        case KIND_OPERATOR:
            A = v.last();
            v.pop_back();
            B = v.last();
            v.pop_back();
            if(A<0){ As = reg[-A-1]; used[-A-1] = 0;}
            else    As = "_"+sym->value(A)->lexema;
            if(B<0){ Bs = reg[-B-1]; used[-B-1] = 0;}
            else    Bs = "_"+sym->value(B)->lexema;
            switch (n.val) {
            case '=':
                if(B<0) // se copia de registro
                {
                    out->putLine("\tmov "+As+","+Bs);
                }
                else // se copia memoria a memoria
                {
                    out->putLine(QString("\tmov EAX,")+Bs);
                    out->putLine(QString("\tmov ")+As+",EAX");
                }
                break;
            case '+':
                if(A<0) // si A en registro
                {
                    out->putLine(QString("\tadd ")+As+","+Bs);
                    used[-A-1] = v.size();
                    v.push_back(A);
                }
                else if(B<0) // si B en registro
                {
                    out->putLine(QString("\tadd ")+Bs+","+As);
                    used[-B-1] = v.size();
                    v.push_back(B);
                }
                else // todos en memoria
                {
                    while(r<4&&used[r]) r++;
                    out->putLine("\tmov "+reg[r]+","+As);
                    out->putLine("\tadd "+reg[r]+","+Bs);
                    used[r] = v.size();
                    v.push_back(-r-1);
                }
                out->putLine("\tJO ADDOV_ERROR");
                break;
            case '-':
                if(B<0) // si A en registro
                {
                    out->putLine("\tSUB "+Bs+","+As);
                    used[-B-1] = v.size();
                    v.push_back(B);
                }
                else if(A<0) // si B en registro
                {
                    out->putLine("\tNEG "+As);
                    out->putLine("\tADD "+Bs+","+As);
                    used[-A-1] = v.size();
                    v.push_back(A);
                }
                else // todos en memoria
                {
                    while(r<4&&used[r]) r++;
                    out->putLine("\tmov "+reg[r]+","+Bs);
                    out->putLine("\tSUB "+reg[r]+","+As);
                    used[r] = v.size();
                    v.push_back(-r-1);
                }
                break;
            case '*':
                if(A<0&&B!=-3) // si A en Reg
                {
                    if(A!=-3)
                    {
                        out->putLine("\tXOR EAX,"+As);
                        out->putLine("\tXOR "+As+",EAX");
                        out->putLine("\tXOR EAX,"+As);
                        used[-A-1] = used[2];
                        used[2] = 0;
                        v.remove(used[-A-1]);
                        v.insert(used[-A-1],-A-1);
                    }
                    if(used[3])
                    {
                        while(r<2&&used[r])r++;
                        if(r<2)
                        {
                            if(B==-r-1)
                            {
                                out->putLine("\tXOR "+reg[r]+","+reg[3]);
                                out->putLine("\tXOR "+reg[3]+","+reg[r]);
                                out->putLine("\tXOR "+reg[r]+","+reg[3]);
                                Bs = reg[3];
                            }
                            else
                                out->putLine("\tMOV "+reg[r]+","+reg[3]);
                            used[r] = used[3];
                            used[3] = 0;
                            v.remove(used[r]);
                            v.insert(used[r],-r-3);
                        }
                        else
                            qDebug() << "* regs overflow!!!";
                    }
                    out->putLine("\tIMUL "+Bs);
                }
                else if(B<0) // si B en Reg
                {
                    if(B!=-3)
                    {
                        if(used[2])
                        {
                            out->putLine("\tXOR EAX,"+Bs);
                            out->putLine("\tXOR "+Bs+",EAX");
                            out->putLine("\tXOR EAX,"+Bs);
                            used[-B-1] = used[2];
                            used[2] = 0;
                            v.remove(used[-B-1]);
                            v.insert(used[-B-1],-B-1);
                        }else
                            out->putLine("\tMOV EAX,"+Bs);
                    }
                    if(used[3])
                    {
                        while(r<2&&used[r])r++;
                        if(r<2)
                        {
                            if(A==-r-1)
                            {//swap
                                out->putLine("\tXOR "+reg[r]+","+reg[3]);
                                out->putLine("\tXOR "+reg[3]+","+reg[r]);
                                out->putLine("\tXOR "+reg[r]+","+reg[3]);
                                As = reg[3];
                            }
                            else
                                out->putLine("\tMOV "+reg[r]+","+reg[3]);
                            used[r] = used[3];
                            used[3] = 0;
                            v.remove(used[r]);
                            v.insert(used[r],-r-3);
                        }
                        else
                            qDebug() << "* regs overflow!!!";
                    }
                    out->putLine("\tIMUL "+As);
                }
                else // En memoria
                {
                    if(used[2])
                    {
                        while(r<2&&used[r])r++;
                        if(r<2)
                        {
                           out->putLine("\tMOV "+reg[r]+","+reg[2]);
                            used[r] = used[2];
                            used[2] = 0;
                            v.remove(used[r]);
                            v.insert(used[r],-r-1);
                        }
                        else
                            qDebug() << "* regs overflow!!!";
                    }r=0;
                    if(used[3])
                    {
                        while(r<2&&used[r])r++;
                        if(r<2)
                        {
                           out->putLine("\tMOV "+reg[r]+","+reg[3]);
                            used[r] = used[3];
                            used[3] = 0;
                            v.remove(used[r]);
                            v.insert(used[r],-r-3);
                        }
                        else
                            qDebug() << "* regs overflow!!!";
                    }
                    out->putLine("\tMOV EAX,"+As);
                    out->putLine("\tIMUL "+Bs);
                }
                used[2] = v.size();
                v.push_back(-2-1);
                out->putLine("\tJO MULOV_ERROR");
                break;
            case '/':
                if(B<0) // si B en Reg
                {
                    if(B!=-3)
                    {
                        if(used[2])
                        {
                            out->putLine("\tXOR EAX,"+Bs);
                            out->putLine("\tXOR "+Bs+",EAX");
                            out->putLine("\tXOR EAX,"+Bs);
                            used[-B-1] = used[2];
                            used[2] = 0;
                            v.remove(used[-B-1]);
                            v.insert(used[-B-1],-B-1);
                        }else
                            out->putLine("\tMOV EAX,"+Bs);
                    }
                    if(used[3])
                    {
                        while(r<2&&used[r])r++;
                        if(r<2)
                        {
                            if(A==-r-1)
                            {//swap
                                out->putLine("\tXOR "+reg[r]+","+reg[3]);
                                out->putLine("\tXOR "+reg[3]+","+reg[r]);
                                out->putLine("\tXOR "+reg[r]+","+reg[3]);
                                As = reg[3];
                            }
                            else
                                out->putLine("\tMOV "+reg[r]+","+reg[3]);
                            used[r] = used[3];
                            used[3] = 0;
                            v.remove(used[r]);
                            v.insert(used[r],-r-3);
                        }
                        else
                            qDebug() << "* regs overflow!!!";
                    }
                    out->putLine("\tIDIV "+As);
                }
                else // B en memoria
                {
                    if(used[2])
                    {
                        while(r<2&&used[r])r++;
                        if(r<2)
                        {
                           out->putLine("\tMOV "+reg[r]+","+reg[2]);
                            used[r] = used[2];
                            used[2] = 0;
                            v.remove(used[r]);
                            v.insert(used[r],-r-1);
                        }
                        else
                            qDebug() << "* regs overflow!!!";
                    } r=0;
                    if(used[3])
                    {
                        while(r<2&&used[r])r++;
                        if(r<2)
                        {
                           out->putLine("\tMOV "+reg[r]+","+reg[3]);
                            used[r] = used[3];
                            used[3] = 0;
                            v.remove(used[r]);
                            v.insert(used[r],-r-3);
                        }
                        else
                            qDebug() << "* regs overflow!!!";
                    }
                    if(A == -3) // As == EAX => As := EDX
                    {
                        out->putLine("\tMOV "+reg[3]+","+As);
                        As = reg[3];
                    }
                    out->putLine("\tMOV EAX,"+Bs);
                    out->putLine("\tIDIV "+As);
                }
                used[2] = v.size();
                v.push_back(-2-1);
                break;
            case '<':
            case '>':
            case EQU:
            case NEQ:
            case GEQ:
            case LEQ:
                if(A<0||B<0) // Alguno esta en un registro.
                    out->putLine("\tcmp "+Bs+","+As);
                else // ambos en memoria
                {
                    out->putLine("\tmov EAX,"+Bs);
                    out->putLine("\tcmp EAX,"+As);
                }
                v.push_back(n.val);
            default:
                break;
            }
            break;
        case KIND_PRINT:
            A = v.last();
            v.pop_back();
            out->putLine(QString()+"\tinvoke MessageBox, NULL, addr "+"STR"+QString::number(A)+", addr "+"STR"+QString::number(A)+", MB_OK");
            break;
        case KIND_RET:
            A = v.last();
            v.pop_back();
            if(A<0){ As = reg[-A-1]; used[-A-1] = 0;}
            else    As = "_"+sym->value(A)->lexema;
            if(A < 0)
                out->putLine("\tMOV [ebp+4],"+As);
            else
            {
                out->putLine("\tMOV EAX,"+As);
                out->putLine("\tMOV [ebp+4],EAX");
            }
            out->putLine("\tRET");
        default:
            break;
        }
    }
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
