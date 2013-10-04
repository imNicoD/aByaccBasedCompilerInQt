#ifndef LEXER_BASE_H
#define LEXER_BASE_H

class lexer_base
{
public:
    virtual int yylex() = 0;
    virtual int currentLine() = 0;
    virtual int currentCol() = 0;
};

#endif // LEXER_BASE_H
