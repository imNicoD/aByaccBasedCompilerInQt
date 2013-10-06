#include "codegen_tree.h"
#include <QVector>
#include "stdarg.h"

codegen_tree::codegen_tree()
{
    nodes.append({CODE_VOID});
}


int codegen_tree::node(int type,...)
{
    // void optimization
    if(type == CODE_VOID) return 0;

    va_list ap;
    va_start(ap, type);
    node_t n;
    n.type = type;
    int len = param_len(type);
    for (int i = 0; i < len; i++)
        n.inner.append(va_arg(ap, int));
    va_end(ap);
    nodes.append(n);
    return nodes.size()-1;
}

QVector<node_t> *codegen_tree::getNodes()
{
    return &nodes;
}

// //////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// DEBUG SECTION //////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////

#include <QDebug>

void codegen_tree::dump()
{
    for(int i = nodes.size()-1; i >= 0; i--)
    {
        qDebug() << i << '\t' << name(nodes[i].type) << " " << nodes[i].inner;
    }
}


