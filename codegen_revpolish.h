#ifndef CODEGEN_REVPOLISH_H
#define CODEGEN_REVPOLISH_H

#include "codegen_base.h"
#include <QVector>

class codegen_revpolish : public codegen_base
{
public:
    codegen_revpolish();
    int node(int type, ...);
    void dump();
private:
    typedef struct {int type; int val;} node_t;
    QVector<QVector<node_t> > V;
};

#endif // CODEGEN_REVPOLISH_H
