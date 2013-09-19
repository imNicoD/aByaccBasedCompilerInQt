#include "stream_double.h"

stream_double::stream_double(stream_base * s1, stream_base * s2)
{
    this->s1 = s1;
    this->s2 = s2;
}

void stream_double::putLine(QString s)
{
    s1->putLine(s);
    s2->putLine(s);
}
