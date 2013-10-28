#ifndef PARSER_H
#define PARSER_H

#include "lexer_base.h"
#include "stream_base.h"
#include "codegen_base.h"
#include "Y_TAB.h"
#include "symboltable.h"

class parser
{
public:
    parser(lexer_base * lex, stream_base * err, codegen_base * cod, SymbolTable * sym);
    int yyparse();
    bool hasErrors();
private:
    void yyerror(QString s);
    int yylex();
    void notify(const char * c);
    bool check_range(int i);
    int negative(int i);
    bool error;
    lexer_base  * lex;
    stream_base * err;
    codegen_base* cod;
    SymbolTable * sym;
};

#endif // PARSER_H
