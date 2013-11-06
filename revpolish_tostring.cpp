#include "revpolish_tostring.h"
#include "Y_TAB.H"

revpolish_tostring::revpolish_tostring(QVector<rp_node_t> * rev_polish, SymbolTable * sym, stream_base * out)
{
    QString s;
    for(int i = 0; i < rev_polish->size(); i++)
    {
        rp_node_t n = rev_polish->value(i);
        switch (n.type) {
            s+= sym->value(n.val)->lexema;
            break;
        case KIND_ADDR:
            s+= "Lbl_" + QString::number(n.val);
            break;
        case KIND_CALL:
            s+= "()";
            break;
        case KIND_ENTRY:
            s+= sym->value(n.val)->lexema+":";
            break;
        case KIND_JUMP:
            s+= "JMP";
            break;
        case KIND_JUMPC:
            s+= "JC";
            break;
        case KIND_LABEL:
            s+= "Lbl_" + QString::number(i);
            break;
        case KIND_OPERATOR:
            if(n.val<255)
                s+= (char)n.val;
            else
                switch (n.val) {
                case GEQ:
                    s+= ">=";
                    break;
                case LEQ:
                    s+= "<=";
                    break;
                case EQU:
                    s+= "==";
                    break;
                default:
                    break;
                }
            break;
        case KIND_PRINT:
            s+= "PRINT";
            break;
        case KIND_RET:
            s+= "RET";
            break;
        case KIND_SYMBOL:
            s+= sym->value(n.val)->lexema;
            break;
        default:
            break;
        }
        s+=" ";
    }
    out->putLine(s);
}
