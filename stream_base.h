#ifndef STREAM_BASE_H
#define STREAM_BASE_H

#include <QString>

class stream_base
{
public:
    virtual void putLine(QString) = 0;
};

#endif // STREAM_BASE_H
