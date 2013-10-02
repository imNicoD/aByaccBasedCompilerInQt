#ifndef LEXER_BASE_H
#define LEXER_BASE_H

typedef struct
{
    int type;
    int val;
} token_t;

class lexer_base
{
public:
    virtual token_t yylex() = 0;
    virtual int currentLine() = 0;
    virtual int currentCol() = 0;
};

#endif // LEXER_BASE_H
