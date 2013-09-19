#ifndef CODEGEN_PRINT_H
#define CODEGEN_PRINT_H
#include "codegen_base.h"
#include "stream_base.h"

class codegen_print : public codegen_base
{
public:
    codegen_print(stream_base * stream);
    int node(int type, ...);
private:
    int i;
    stream_base * strm;
};

#endif // CODEGEN_PRINT_H
