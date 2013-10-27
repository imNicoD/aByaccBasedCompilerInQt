#ifndef CODEGEN_REVPOLISH_H
#define CODEGEN_REVPOLISH_H

#include "codegen_base.h"
#include <QVector>
typedef struct {int type; int val;} rp_node_t;

class codegen_revpolish : public codegen_base
{
public:
    codegen_revpolish();
    int node(int type, ...);
    void push(int kind, int val = 0);
    QVector<rp_node_t> * getRP();
    void dump();
private:
    QVector<rp_node_t> V;
    QVector<int> labelStack;
};

#endif // CODEGEN_REVPOLISH_H
