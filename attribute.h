#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H
#include <QMap>
#include <QString>

class Attribute
{
    /** Definir, agregar y mostrar atributos **/
public:
    Attribute();
    QString type;
    long long value;
    QString lexema;
    QMap<int,int> ambito;
};

#endif // ATTRIBUTE_H
