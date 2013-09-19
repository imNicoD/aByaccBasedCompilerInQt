#include "console.h"

console::console()
{
}

#include <QDebug>

void console::putLine(QString s)
{
    qDebug() << s;
}
