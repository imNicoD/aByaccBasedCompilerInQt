#ifndef CODEGEN_TREE_H
#define CODEGEN_TREE_H
#include "codegen_base.h"
#include <QVector>

typedef struct {
    int type;
    QVector<int> inner;
} node_t;

class codegen_tree : public codegen_base
{
public:
    codegen_tree();
    int node(int type, ...);
    QVector<node_t> * getNodes();
    void dump();
private:
    QVector<node_t> nodes;
};

#endif // CODEGEN_TREE_H
