#include "stream_txt.h"


stream_txt::stream_txt(QString file) : f(file)
{
    this->f.open(QIODevice::WriteOnly | QIODevice::Truncate	);
}

stream_txt::~stream_txt()
{
    this->f.close();
}

void stream_txt::putLine(QString s)
{
    f.write(s.toUtf8());
    f.putChar('\r');
    f.putChar('\n');
}
