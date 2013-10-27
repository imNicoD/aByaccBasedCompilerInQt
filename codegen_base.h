#ifndef CODEGEN_BASE_H
#define CODEGEN_BASE_H

#define CODE_VOID       0
#define CODE_IF         1
#define CODE_IF_ELSE    2
#define CODE_ASIG       3
#define CODE_LOOP       4
#define CODE_BLOCK      5
//#define CODE_COND       6
//#define CODE_EXPR       7
#define CODE_RETURN     8
#define CODE_PRINT      9
#define CODE_FUNCTION   10
#define CODE_CALL       11
#define CODE_DECL       12
#define CODE_ENTRY      13
#define CODE_DECLLIST   14
#define CODE_NEG        15
#define CODE_VARLIST    16
#define CODE_PROGRAM    17

#define KIND_OPERATOR   0
#define KIND_SYMBOL     1
#define KIND_JUMP       2
#define KIND_JUMPC      3
#define KIND_LABEL      4
#define KIND_ADDR       5
#define KIND_CALL       6
#define KIND_ENTRY      7
#define KIND_PRINT      8
#define KIND_RET        9

#define TO_FW           0
#define TO_BW           1
#define TO_BBW          2

#include <QString>

int param_len(int type);
QString name(int t);

class codegen_base
{
public:
    virtual int node(int type, ...) = 0;

    virtual void push(int kind, int val = 0){Q_UNUSED(kind);Q_UNUSED(val)}
};

#endif // CODEGEN_BASE_H
