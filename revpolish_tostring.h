#ifndef REVPOLISH_TOSTRING_H
#define REVPOLISH_TOSTRING_H

#include <QVector>
#include "codegen_revpolish.h"
#include "symboltable.h"
#include "stream_base.h"

class revpolish_tostring
{
public:
    revpolish_tostring(QVector<rp_node_t> * rev_polish, SymbolTable * sym, stream_base * out);
};

#endif // REVPOLISH_TOSTRING_H
