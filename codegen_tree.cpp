#include "codegen_tree.h"
#include <QVector>
#include "stdarg.h"

codegen_tree::codegen_tree()
{
}

int param_len(int type)
{
    switch(type)
    {
    case CODE_RETURN:
    case CODE_PRINT:
    case CODE_CALL:
        return 1;
    case CODE_ASIG:
    case CODE_FUNCTION:
    case CODE_DECL:
    case CODE_IF:
    case CODE_BLOCK:
    case CODE_LOOP:
        return 2;
    case CODE_IF_ELSE:
    case CODE_COND:
    case CODE_EXPR:
        return 3;
    }
    return 0;
}

int codegen_tree::node(int type,...)
{
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

#include <QString>


QString name(int t)
{
    switch(t)
    {
    case CODE_VOID:
        return QString("void");
    case CODE_IF:
        return QString("if");
    case CODE_IF_ELSE:
        return QString("ifelse");
    case CODE_ASIG:
        return QString("asig");
    case CODE_LOOP:
        return QString("loop");
    case CODE_BLOCK:
        return QString("block");
    case CODE_COND:
        return QString("cond");
    case CODE_EXPR:
        return QString("expr");
    case CODE_RETURN:
        return QString("ret");
    case CODE_PRINT:
        return QString("print");
    case CODE_FUNCTION:
        return QString("func");
    case CODE_CALL:
        return QString("call");
    case CODE_DECL:
        return QString("decl");
    }
}

#include <QDebug>

void codegen_tree::dump()
{
    for(int i = nodes.size()-1; i >= 0; i--)
    {
        qDebug() << i << '\t' << name(nodes[i].type) << " " << nodes[i].inner;
    }
}


