#include "codegen_revpolish.h"

codegen_revpolish::codegen_revpolish()
{
    V.append(QVector<node_t>());
}

#include "stdarg.h"



int codegen_revpolish::node(int type, ...)
{
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
    return ( - V.size() );
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
    for(int i = 0; i < V.last().size(); i++)
    {
        node_t n = V.last().value(i);
        if(n.type<0) s.append(QString::number(n.val));
        else s.append(name(n.type));
        s.append(" ");
    }
    qDebug() << "Polish: " << s;
}
