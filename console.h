#ifndef CONSOLE_H
#define CONSOLE_H

#include <QString>
#include "stream_base.h"

class console : public stream_base
{
public:
    console();
    void putLine(QString s);
};

#endif // CONSOLE_H
