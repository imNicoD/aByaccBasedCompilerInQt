#ifndef ASMGEN_H
#define ASMGEN_H

#include "symboltable.h"
#include "stream_base.h"
#include "codegen_revpolish.h"

class asmgen
{
public:
    asmgen(SymbolTable * sym, stream_base * out);
    void generate(QVector<rp_node_t> * rev_polish);
private:
    void data_out();
    void init();
    SymbolTable * sym;
    stream_base * out;



    QMap<int, QString> cmp; // jump on fail
    int used[4] = {0,0,0,0};
    QVector<int> v;
    int A,B,r;
    QString As,Bs;
    QString reg [] = {"EBX", "ECX", "EAX", "EDX"};
};

#endif // ASMGEN_H
