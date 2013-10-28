#include "codegen_revpolish.h"

codegen_revpolish::codegen_revpolish()
{
    //V.append(QVector<node_t>());
    labelStack.push_back(0);
    V.push_back({KIND_ADDR});
    V.push_back({KIND_JUMP});
}

#include "stdarg.h"



int codegen_revpolish::node(int type, ...)
{/*
    if(type == CODE_VOID) return -1;
    va_list ap;
    va_start(ap, type);
    QVector<node_t> n;
    n.append({type});
    int len = param_len(type);
    for (int i = 0; i < len; i++)
    {
        int m = va_arg(ap, int);
        if(m < 0)
        {
            m = - m - 1;
            int s = V.value(m).size();
            for(int j = 0; j < s; j++)
                n.append(V.value(m).value(j));
        }
        else n.append({-1,m});
    }
    va_end(ap);
    V.append(n);
    return ( - V.size() );*/
    return 0;
}

void codegen_revpolish::push(int kind, int val)
{
    if(kind == KIND_LABEL)
    {
        if(val == TO_FW)
            labelStack.push_back(V.size());
        else
        {
            int i = (val == TO_BW)?1:2;
            int j = labelStack.value(labelStack.size()-i);
            if(!labelStack.empty())
            {
                labelStack.remove(labelStack.size()-i);
                V.remove(j);
                V.insert(j, {KIND_ADDR,V.size()+1});
            }
        }
    }
    else if(kind == KIND_JUMP || kind == KIND_JUMPC)
    {
        if(val == TO_BW)
        {
            int j = labelStack.last();
            V.push_back({KIND_ADDR, j});
            labelStack.removeLast();
        }
        else
        {
            labelStack.push_back(V.size());
            V.push_back({KIND_ADDR});
        }
    }

    V.push_back({kind, val});
}

QVector<rp_node_t> * codegen_revpolish::getRP()
{
    return &V;
}

// //////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// DEBUG SECTION //////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////

#include <QString>
#include <QDebug>

void codegen_revpolish::dump()
{
    QString s;
    for(int i = 0; i < V.size(); i++)
    {
        rp_node_t n = V.value(i);
        if(n.type == KIND_SYMBOL)
            s.append(QString::number(n.val));
        else if (n.type == KIND_OPERATOR)
            s.append(n.val);
        else if (n.type == KIND_JUMP || n.type == KIND_JUMPC)
            s.append("JMP");
        else if (n.type == KIND_LABEL)
            s.append("LBL"+QString::number(i));
        else if (n.type == KIND_ADDR )
            s.append(QString::number(n.val));
        else
            s.append(QString::number(n.type)+":"+QString::number(n.val));
        s.append(" ");
    }
    qDebug() << "Polish: " << s;
}
