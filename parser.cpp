#include "parser.h"

parser::parser(lexer_base * lex, stream_base * err, codegen_base * cod, SymbolTable * sym)
{
    this->lex = lex;
    this->err = err;
    this->cod = cod;
    this->sym = sym;
    this->error = false;
    this->ambito = 0;
}

bool parser::hasErrors()
{
    return error;
}

void parser::yyerror(QString s)
{

    QString ss = QString("Error en ")+QString::number(this->lex->currentLine())+QString(": ")+s;
    this->err->putLine(ss);
}

void parser::notify(const char *c)
{
    this->err->putLine("PARSER ERROR "+QString::number(lex->currentLine())+": "+QString(c));
    error = true;
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

void parser::fIn()
{
    function = true;
    ambito++;
}

void parser::fOut()
{
    function = false;
}

int parser::decl(int i)
{
    if(!sym->contains(i)) return -1;

    Attribute * attr = this->sym->value(i);
    if(function)
    {
        int ret = attr->ambito.value(ambito, -1);
        if(ret < 0 && attr->type == "long") ret = i;
        return ret;
    }
    else
        return i;
}
#include <QDebug>

bool parser::setType(int i, QString type)
{
    if(type != "long" || !function) return sym->setType(i,type);
    if(function)
    {
        Attribute * attr = this->sym->value(i);
        if(attr->ambito.contains(ambito)) return false;
        Attribute * nattr = new Attribute();
        nattr->lexema = "_foo"+QString::number(ambito)+"_"+attr->lexema;
        nattr->type = type;
        sym->insert(nattr->lexema, nattr);
        attr->ambito.insert(ambito, sym->getIndex(nattr->lexema));
    }
    return true;
}

#define yyparse parser::yyparse
#include "Y_TAB.C" // yypase()
