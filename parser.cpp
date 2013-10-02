#include "parser.h"

parser::parser(lexer_base * lex, stream_base * err, codegen_base * cod)
{
    this->lex = lex;
    this->err = err;
    this->cod = cod;
}

void parser::yyerror(QString s)
{

    QString ss = QString("Error en ")+QString::number(this->lex->currentLine())+QString(": ")+s;
    this->err->putLine(ss);
}

void parser::notify(const char *c)
{
    this->err->putLine("PARSER ERROR "+QString::number(lex->currentLine())+": "+QString(c));
}

int parser::yylex()
{
    token_t t = this->lex->yylex();
    yyval = t.val;
    return t.type;
}

#define yyparse parser::yyparse
#include "Y_TAB.C" // yypase()
