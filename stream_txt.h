#ifndef STREAM_TXT_H
#define STREAM_TXT_H
#include "stream_base.h"
#include <QFile>

class stream_txt : public stream_base
{
public:
    stream_txt(QString file);
    ~stream_txt();
    void putLine(QString);
private:
    QFile f;
};

#endif // STREAM_TXT_H
