#ifndef CODEGEN_BASE_H
#define CODEGEN_BASE_H

#define CODE_VOID       0
#define CODE_IF         1
#define CODE_IF_ELSE    2
#define CODE_ASIG       3
#define CODE_LOOP       4
#define CODE_BLOCK      5
#define CODE_COND       6
#define CODE_EXPR       7
#define CODE_RETURN     8
#define CODE_PRINT      9
#define CODE_FUNCTION   10
#define CODE_CALL       11
#define CODE_DECL       12


class codegen_base
{
public:
    virtual int node(int type, ...) = 0;
};

#endif // CODEGEN_BASE_H
