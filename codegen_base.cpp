#include "codegen_base.h"
#include "Y_TAB.H"

int param_len(int type)
{
    switch(type)
    {
    case CODE_RETURN:
    case CODE_PRINT:
    case CODE_CALL:
    case CODE_ENTRY:
    case CODE_NEG:
        return 1;
    case CODE_ASIG:
    case CODE_FUNCTION:
    case CODE_DECL:
    case CODE_IF:
    case CODE_BLOCK:
    case CODE_LOOP:
    case CODE_DECLLIST:
    case CODE_VARLIST:
    case CODE_PROGRAM:
    case '*':
    case '+':
    case '-':
    case '/':
    case '<':
    case '>':
    case EQU:
    case NEQ:
    case GEQ:
    case LEQ:
        return 2;
    case CODE_IF_ELSE:
    //case CODE_COND:
        return 3;
    }
    return 0;
}
// //////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// DEBUG SECTION //////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////
// //////////////////////////////////////////////////////////////////////////////////

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
    case CODE_ENTRY:
        return QString("entry");
    case CODE_DECLLIST:
        return QString("declList");
    case CODE_NEG:
        return QString("neg");
    case CODE_VARLIST:
        return QString("varList");
    case CODE_PROGRAM:
        return("Program");
    case '*':
        return("*");
    case '+':
        return("+");
    case '-':
        return("-");
    case '/':
        return("/");
    case '<':
        return("<");
    case '>':
        return(">");
    case EQU:
        return("==");
    case NEQ:
        return("!=");
    case GEQ:
        return(">=");
    case LEQ:
        return("<=");
    }
    return QString("");
}
