#include "parser.h"

parser::parser(lexer_base * lex, stream_base * err, codegen_base * cod, SymbolTable * sym)
{
    this->lex = lex;
    this->err = err;
    this->cod = cod;
    this->sym = sym;
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
    return this->lex->yylex();
}

bool parser::check_range(int i)
{
    Attribute * attr = this->sym->value(i);
    if(attr->lexema.toLongLong(0,10) < 2147483648)
        return true;
    return false;
}

int parser::negative(int i)
{
    Attribute * attr = this->sym->value(i);
    QString vstr = "-"+attr->lexema;
    if(sym->contains(vstr))
        return sym->getIndex(vstr);

    Attribute * nattr = new Attribute();
    nattr->lexema = vstr;
    nattr->type = "Cte";
    sym->insert(vstr, nattr);
    return sym->getIndex(vstr);
}
/*
int parser::scope(int i)
{
    Attribute * attr = this->sym->value(i);

    QString vstr = "S_"+attr->lexema;
    if(sym->contains(vstr))
        return sym->getIndex(vstr);

    Attribute * nattr = new Attribute();
    nattr->lexema = vstr;
    nattr->type = attr->type;
    sym->insert(vstr, nattr);
    return sym->getIndex(vstr);
}*/

#define yyparse parser::yyparse
#include "Y_TAB.C" // yypase()
