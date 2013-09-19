#ifndef STREAM_DOUBLE_H
#define STREAM_DOUBLE_H
#include "stream_base.h"

class stream_double : public stream_base
{
public:
    stream_double(stream_base *, stream_base *);
    void putLine(QString);
private:
    stream_base * s1, * s2;
};

#endif // STREAM_DOUBLE_H
