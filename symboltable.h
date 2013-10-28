#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

#include <QVector>
#include <QMap>
#include "attribute.h"

class SymbolTable
{
public:
    SymbolTable();
    bool setType(const int i, const QString type);
    void insert(QString s, Attribute * attr);
    bool contains(QString s);
    bool contains(int key);
    int getIndex(QString s);
    int size();
    QList<QString> keys();
    Attribute * value(const QString key);
    Attribute * value(const int index);
private:
    QMap<QString, Attribute*> attr;
    QVector<QString> index;
};

#endif // SYMBOLTABLE_H
