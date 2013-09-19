#include "codegen_print.h"

codegen_print::codegen_print(stream_base * stream): i(0)
{
    this->strm = stream;
}


#include <stdarg.h>

int codegen_print::node(int type, ...)
{
    switch(type)
    {
        case CODE_IF:
            this->strm->putLine("Se genera un IF.");
            break;
        case CODE_IF_ELSE:
            this->strm->putLine("Se genera un IF-Else.");
            break;
        case CODE_ASIG:
            this->strm->putLine("Se genera una Asignación.");
            break;
        case CODE_LOOP:
            this->strm->putLine("Se genera un Bucle.");
            break;
        case CODE_COND:
            this->strm->putLine("Se genera una Comparación.");
            break;
        case CODE_EXPR:
            this->strm->putLine("Se genera una Expreción.");
            break;
        case CODE_RETURN:
            this->strm->putLine("Se genera un Return.");
            break;
        case CODE_PRINT:
            this->strm->putLine("Se genera un Print.");
            break;
        case CODE_FUNCTION:
            this->strm->putLine("Se genera una Función.");
            break;
        case CODE_CALL:
            this->strm->putLine("Se genera un Llamado.");
            break;
        case CODE_DECL:
            this->strm->putLine("Se genera una declaración.");
            break;
    }
    return i++;
}
