#ifndef PARSER_H
#define PARSER_H

#include "lexer_base.h"
#include "stream_base.h"
#include "codegen_base.h"
#include "Y_TAB.h"

class parser
{
public:
    parser(lexer_base * lex, stream_base * err, codegen_base * cod);
    int yyparse();

private:
    void yyerror(QString s);
    int yylex();
    void notify(const char * c);
    int yyval;
    lexer_base  * lex;
    stream_base * err;
    codegen_base* cod;
};

#endif // PARSER_H
