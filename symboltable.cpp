#include "symboltable.h"

SymbolTable::SymbolTable()
{

}
bool SymbolTable::setType(const int i, const QString type)
{
    QString key = index.value(i);
    Attribute * a = attr.value(key);
    if(a->type == "Id")
    {
        a->type = type;
        return true;
    }
    else
        return false;
}


void SymbolTable::insert(QString s, Attribute *attr)
{
    this->attr.insert(s,attr);
    this->index.append(s);
}

bool SymbolTable::contains(QString s)
{
    return this->attr.contains(s);
}


int SymbolTable::getIndex(QString s)
{
    return this->index.indexOf(s);
}


int SymbolTable::size()
{
    return this->attr.size();
}

QList<QString> SymbolTable::keys()
{
    return this->attr.keys();
}

Attribute *SymbolTable::value(const QString key)
{
    return this->attr.value(key);
}
Attribute *SymbolTable::value(const int index)
{
    return this->attr.value(this->index.value(index));
}
