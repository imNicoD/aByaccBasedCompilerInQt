#include "lexer.h"
#include "Y_TAB.H"

Lexer::Lexer(QString text, stream_base * err, QMap<QString, Attribute*> * symTable)
{
    this->err = err;
    readingInfo = text; // copy the text on the screen
    reservedWordTable = new QMap<QString, int>();
    symbolTable = symTable;

    // Load the reserved words in the table
    reservedWordTable->insert("if",         IF      );
    reservedWordTable->insert("then",       THEN    );
    reservedWordTable->insert("else",       ELSE    );
    reservedWordTable->insert("begin",      BEGIN   );
    reservedWordTable->insert("end",        END     );
    reservedWordTable->insert("print",      PRINT   );
    reservedWordTable->insert("function",   FUNCTION);
    reservedWordTable->insert("return",     RETURN  );
    reservedWordTable->insert("long",       TYPE    );
    reservedWordTable->insert("loop",       LOOP    );
    reservedWordTable->insert("until",      UNTIL   );

    // Load the array of semantic actions
    semanticActions[0][VALIDCHAR] =             (&Lexer::A1);
    semanticActions[0][DIGITO] =                (&Lexer::A1);
    semanticActions[0][MAS] =                   (&Lexer::A5);
    semanticActions[0][MENOS] =                 (&Lexer::A5);
    semanticActions[0][PRODUCTO] =              (&Lexer::A5);
    semanticActions[0][DIVISION] =              (&Lexer::A5);
    semanticActions[0][IGUAL] =                 (&Lexer::A1);
    semanticActions[0][MAYOR] =                 (&Lexer::A1);
    semanticActions[0][MENOR] =                 (&Lexer::A1);
    semanticActions[0][ADMIRACION] =            (&Lexer::A1);
    semanticActions[0][COMILLA] =               (&Lexer::A1);
    semanticActions[0][PARENTESISABRE] =        (&Lexer::A5);
    semanticActions[0][PARENTESISCIERRA] =      (&Lexer::A5);
    semanticActions[0][COMA] =                  (&Lexer::A5);
    semanticActions[0][PUNTOYCOMA] =            (&Lexer::A5);
    semanticActions[0][BARRAINVERTIDA]=         (&Lexer::A0);
    semanticActions[0][FINDELINEA] =            (&Lexer::A7);
    semanticActions[0][ESPACIO] =               (&Lexer::A0);
    semanticActions[0][TAB] =                   (&Lexer::A0);
    semanticActions[0][OTROS] =                 (&Lexer::E1);
    semanticActions[0][FINARCHIVO] =            (&Lexer::A0);
    semanticActions[0][DOSPUNTOS]  =            (&Lexer::A5);

    semanticActions[1][VALIDCHAR] =             (&Lexer::A2);
    semanticActions[1][DIGITO] =                (&Lexer::A2);
    semanticActions[1][MAS] =                   (&Lexer::A3);
    semanticActions[1][MENOS] =                 (&Lexer::A3);
    semanticActions[1][PRODUCTO] =              (&Lexer::A3);
    semanticActions[1][DIVISION] =              (&Lexer::A3);
    semanticActions[1][IGUAL] =                 (&Lexer::A3);
    semanticActions[1][MAYOR] =                 (&Lexer::A3);
    semanticActions[1][MENOR] =                 (&Lexer::A3);
    semanticActions[1][ADMIRACION] =            (&Lexer::A3);
    semanticActions[1][COMILLA] =               (&Lexer::A3);
    semanticActions[1][PARENTESISABRE] =        (&Lexer::A3);
    semanticActions[1][PARENTESISCIERRA] =      (&Lexer::A3);
    semanticActions[1][COMA] =                  (&Lexer::A3);
    semanticActions[1][PUNTOYCOMA] =            (&Lexer::A3);
    semanticActions[1][BARRAINVERTIDA]=         (&Lexer::A3);
    semanticActions[1][FINDELINEA] =            (&Lexer::A3);
    semanticActions[1][ESPACIO] =               (&Lexer::A3);
    semanticActions[1][TAB] =                   (&Lexer::A3);
    semanticActions[1][OTROS] =                 (&Lexer::A3);
    semanticActions[1][FINARCHIVO] =            (&Lexer::A3);
    semanticActions[1][DOSPUNTOS]  =            (&Lexer::A3);

    semanticActions[2][VALIDCHAR] =             (&Lexer::A4);
    semanticActions[2][DIGITO] =                (&Lexer::A2);
    semanticActions[2][MAS] =                   (&Lexer::A4);
    semanticActions[2][MENOS] =                 (&Lexer::A4);
    semanticActions[2][PRODUCTO] =              (&Lexer::A4);
    semanticActions[2][DIVISION] =              (&Lexer::A4);
    semanticActions[2][IGUAL] =                 (&Lexer::A4);
    semanticActions[2][MAYOR] =                 (&Lexer::A4);
    semanticActions[2][MENOR] =                 (&Lexer::A4);
    semanticActions[2][ADMIRACION] =            (&Lexer::A4);
    semanticActions[2][COMILLA] =               (&Lexer::A4);
    semanticActions[2][PARENTESISABRE] =        (&Lexer::A4);
    semanticActions[2][PARENTESISCIERRA] =      (&Lexer::A4);
    semanticActions[2][COMA] =                  (&Lexer::A4);
    semanticActions[2][PUNTOYCOMA] =            (&Lexer::A4);
    semanticActions[2][BARRAINVERTIDA]=         (&Lexer::A4);
    semanticActions[2][FINDELINEA] =            (&Lexer::A4);
    semanticActions[2][ESPACIO] =               (&Lexer::A4);
    semanticActions[2][TAB] =                   (&Lexer::A4);
    semanticActions[2][OTROS] =                 (&Lexer::A4);
    semanticActions[2][FINARCHIVO] =            (&Lexer::A4);
    semanticActions[2][DOSPUNTOS]  =            (&Lexer::A4);

    semanticActions[3][VALIDCHAR] =             (&Lexer::A6);
    semanticActions[3][DIGITO] =                (&Lexer::A6);
    semanticActions[3][MAS] =                   (&Lexer::A6);
    semanticActions[3][MENOS] =                 (&Lexer::A6);
    semanticActions[3][PRODUCTO] =              (&Lexer::A6);
    semanticActions[3][DIVISION] =              (&Lexer::A6);
    semanticActions[3][IGUAL] =                 (&Lexer::A5);
    semanticActions[3][MAYOR] =                 (&Lexer::A6);
    semanticActions[3][MENOR] =                 (&Lexer::A6);
    semanticActions[3][ADMIRACION] =            (&Lexer::A6);
    semanticActions[3][COMILLA] =               (&Lexer::A6);
    semanticActions[3][PARENTESISABRE] =        (&Lexer::A6);
    semanticActions[3][PARENTESISCIERRA] =      (&Lexer::A6);
    semanticActions[3][COMA] =                  (&Lexer::A6);
    semanticActions[3][PUNTOYCOMA] =            (&Lexer::A6);
    semanticActions[3][BARRAINVERTIDA]=         (&Lexer::A6);
    semanticActions[3][FINDELINEA] =            (&Lexer::A6);
    semanticActions[3][ESPACIO] =               (&Lexer::A6);
    semanticActions[3][TAB] =                   (&Lexer::A6);
    semanticActions[3][OTROS] =                 (&Lexer::A6);
    semanticActions[3][FINARCHIVO] =            (&Lexer::A6);
    semanticActions[3][DOSPUNTOS]  =            (&Lexer::A6);

    semanticActions[4][VALIDCHAR] =             (&Lexer::E2);
    semanticActions[4][DIGITO] =                (&Lexer::E2);
    semanticActions[4][MAS] =                   (&Lexer::E2);
    semanticActions[4][MENOS] =                 (&Lexer::E2);
    semanticActions[4][PRODUCTO] =              (&Lexer::E2);
    semanticActions[4][DIVISION] =              (&Lexer::E2);
    semanticActions[4][IGUAL] =                 (&Lexer::A5);
    semanticActions[4][MAYOR] =                 (&Lexer::E2);
    semanticActions[4][MENOR] =                 (&Lexer::E2);
    semanticActions[4][ADMIRACION] =            (&Lexer::E2);
    semanticActions[4][COMILLA] =               (&Lexer::E2);
    semanticActions[4][PARENTESISABRE] =        (&Lexer::E2);
    semanticActions[4][PARENTESISCIERRA] =      (&Lexer::E2);
    semanticActions[4][COMA] =                  (&Lexer::E2);
    semanticActions[4][PUNTOYCOMA] =            (&Lexer::E2);
    semanticActions[4][BARRAINVERTIDA]=         (&Lexer::E2);
    semanticActions[4][FINDELINEA] =            (&Lexer::E2);
    semanticActions[4][ESPACIO] =               (&Lexer::E2);
    semanticActions[4][TAB] =                   (&Lexer::E2);
    semanticActions[4][OTROS] =                 (&Lexer::E2);
    semanticActions[4][FINARCHIVO] =            (&Lexer::E2);
    semanticActions[4][DOSPUNTOS]  =            (&Lexer::E2);

    semanticActions[5][VALIDCHAR] =             (&Lexer::E4);
    semanticActions[5][DIGITO] =                (&Lexer::E4);
    semanticActions[5][MAS] =                   (&Lexer::E4);
    semanticActions[5][MENOS] =                 (&Lexer::E4);
    semanticActions[5][PRODUCTO] =              (&Lexer::E4);
    semanticActions[5][DIVISION] =              (&Lexer::E4);
    semanticActions[5][IGUAL] =                 (&Lexer::E4);
    semanticActions[5][MAYOR] =                 (&Lexer::E4);
    semanticActions[5][MENOR] =                 (&Lexer::E4);
    semanticActions[5][ADMIRACION] =            (&Lexer::E4);
    semanticActions[5][COMILLA] =               (&Lexer::E4);
    semanticActions[5][PARENTESISABRE] =        (&Lexer::E4);
    semanticActions[5][PARENTESISCIERRA] =      (&Lexer::E4);
    semanticActions[5][COMA] =                  (&Lexer::E4);
    semanticActions[5][PUNTOYCOMA] =            (&Lexer::E4);
    semanticActions[5][BARRAINVERTIDA]=         (&Lexer::A0);
    semanticActions[5][FINDELINEA] =            (&Lexer::E4);
    semanticActions[5][ESPACIO] =               (&Lexer::E4);
    semanticActions[5][TAB] =                   (&Lexer::E4);
    semanticActions[5][OTROS] =                 (&Lexer::E4);
    semanticActions[5][FINARCHIVO] =            (&Lexer::E4);
    semanticActions[5][DOSPUNTOS]  =            (&Lexer::E4);
//    semanticActions[5][DOSPUNTOS]  =            (&Lexer::A6);

    semanticActions[6][VALIDCHAR] =             (&Lexer::A0);
    semanticActions[6][DIGITO] =                (&Lexer::A0);
    semanticActions[6][MAS] =                   (&Lexer::A0);
    semanticActions[6][MENOS] =                 (&Lexer::A0);
    semanticActions[6][PRODUCTO] =              (&Lexer::A0);
    semanticActions[6][DIVISION] =              (&Lexer::A0);
    semanticActions[6][IGUAL] =                 (&Lexer::A0);
    semanticActions[6][MAYOR] =                 (&Lexer::A0);
    semanticActions[6][MENOR] =                 (&Lexer::A0);
    semanticActions[6][ADMIRACION] =            (&Lexer::A0);
    semanticActions[6][COMILLA] =               (&Lexer::A0);
    semanticActions[6][PARENTESISABRE] =        (&Lexer::A0);
    semanticActions[6][PARENTESISCIERRA] =      (&Lexer::A0);
    semanticActions[6][COMA] =                  (&Lexer::A0);
    semanticActions[6][PUNTOYCOMA] =            (&Lexer::A0);
    semanticActions[6][BARRAINVERTIDA]=         (&Lexer::A0);
    semanticActions[6][FINDELINEA] =            (&Lexer::A7);
    semanticActions[6][ESPACIO] =               (&Lexer::A0);
    semanticActions[6][TAB] =                   (&Lexer::A0);
    semanticActions[6][OTROS] =                 (&Lexer::A0);
    semanticActions[6][FINARCHIVO] =            (&Lexer::A0);
    semanticActions[6][DOSPUNTOS]  =            (&Lexer::A0);

    semanticActions[7][VALIDCHAR] =             (&Lexer::A2);
    semanticActions[7][DIGITO] =                (&Lexer::A2);
    semanticActions[7][MAS] =                   (&Lexer::A0);
    semanticActions[7][MENOS] =                 (&Lexer::A2);
    semanticActions[7][PRODUCTO] =              (&Lexer::A2);
    semanticActions[7][DIVISION] =              (&Lexer::A2);
    semanticActions[7][IGUAL] =                 (&Lexer::A2);
    semanticActions[7][MAYOR] =                 (&Lexer::A2);
    semanticActions[7][MENOR] =                 (&Lexer::A2);
    semanticActions[7][ADMIRACION] =            (&Lexer::A2);
    semanticActions[7][COMILLA] =               (&Lexer::A9);
    semanticActions[7][PARENTESISABRE] =        (&Lexer::A2);
    semanticActions[7][PARENTESISCIERRA] =      (&Lexer::A2);
    semanticActions[7][COMA] =                  (&Lexer::A2);
    semanticActions[7][PUNTOYCOMA] =            (&Lexer::A2);
    semanticActions[6][BARRAINVERTIDA]=         (&Lexer::A2);
    semanticActions[7][FINDELINEA] =            (&Lexer::E3);
    semanticActions[7][ESPACIO] =               (&Lexer::A2);
    semanticActions[7][TAB] =                   (&Lexer::A2);
    semanticActions[7][OTROS] =                 (&Lexer::A2);
    semanticActions[7][FINARCHIVO] =            (&Lexer::E3);
    semanticActions[7][DOSPUNTOS]  =            (&Lexer::A2);

    semanticActions[8][VALIDCHAR] =             (&Lexer::A8);
    semanticActions[8][DIGITO] =                (&Lexer::A8);
    semanticActions[8][MAS] =                   (&Lexer::A2);
    semanticActions[8][MENOS] =                 (&Lexer::A8);
    semanticActions[8][PRODUCTO] =              (&Lexer::A8);
    semanticActions[8][DIVISION] =              (&Lexer::A8);
    semanticActions[8][IGUAL] =                 (&Lexer::A8);
    semanticActions[8][MAYOR] =                 (&Lexer::A8);
    semanticActions[8][MENOR] =                 (&Lexer::A8);
    semanticActions[8][ADMIRACION] =            (&Lexer::A8);
    semanticActions[8][COMILLA] =               (&Lexer::A10);
    semanticActions[8][PARENTESISABRE] =        (&Lexer::A8);
    semanticActions[8][PARENTESISCIERRA] =      (&Lexer::A8);
    semanticActions[8][COMA] =                  (&Lexer::A8);
    semanticActions[8][PUNTOYCOMA] =            (&Lexer::A8);
    semanticActions[8][BARRAINVERTIDA]=         (&Lexer::A8);
    semanticActions[8][FINDELINEA] =            (&Lexer::A7);
    semanticActions[8][ESPACIO] =               (&Lexer::A8);
    semanticActions[8][TAB] =                   (&Lexer::A8);
    semanticActions[8][OTROS] =                 (&Lexer::A8);
    semanticActions[8][FINARCHIVO] =            (&Lexer::E3);
    semanticActions[8][DOSPUNTOS]  =            (&Lexer::A8);

    actualLine = 1;
    actualPos = 0;
}

//Add a reserved word in the table
void Lexer::addReservedWord(QString word, int value)
{
    reservedWordTable->insert(word, value);
}

//Returns the number of the character passed as parameter
int Lexer::getCharType(QChar c)
{
    if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
        return VALIDCHAR;
    else if ( c>='0'  && c <= '9')
        return DIGITO;
    else if ( c == '+' )
        return MAS;
    else if ( c == '-' )
        return MENOS;
    else if ( c == '*' )
        return PRODUCTO;
    else if ( c == '/' )
        return DIVISION;
    else if ( c == '=' )
        return IGUAL;
    else if ( c == '>' )
        return MAYOR;
    else if ( c == '<' )
        return MENOR;
    else if ( c == '!')
        return ADMIRACION;
    else if ( c == '"' )
        return COMILLA;
    else if ( c == '(' )
        return PARENTESISABRE;
    else if ( c == ')' )
        return PARENTESISCIERRA;
    else if ( c == ',' )
        return COMA;
    else if ( c == ';' )
        return PUNTOYCOMA;
    else if ( c == ':' )
        return DOSPUNTOS;
    else if ( c == '\\' )
        return BARRAINVERTIDA;
    else if ( c == '\n' )
        return FINDELINEA;
    else if ( c == ' ')
        return ESPACIO;
    else if ( c == '\t' )
        return TAB;
    else
        return OTROS;
}

int Lexer::yylex()
{
    int state   = 0;
    int characterType = 0; //this variable keeps the character type that later we use it to search in the matrix
    actualLexema = "";
    actualChar  = 0;
    token       = -1;

    // Reads the text until found a token or finish de text;
    while ( (state != F) && ( characterType != FINARCHIVO ))
    {
        // Read and identify the next character
        if (actualPos < readingInfo.size()){
            actualChar = readingInfo.at(actualPos);
            characterType = getCharType(actualChar);
        }
        else{
            characterType = FINARCHIVO;
        }
        actualPos++;
        //Execute the semantic action related to the character readed in the actual state
        (this->*semanticActions[state][characterType])();
        //Updates the next state
        state = states[state][characterType];
        //If I'm in a final state but there is no token identifed yet
        if((token == -1)&&(state == F))
            state=0;
    }
    if(state == F){
        err->putLine(actualLexema + ", token identificado: " + QString::number(token));
        return token;
    }
    else{
        //qDebug() << "Lineas recorridas: " << actualLine;
        return 0;
    }
}

QMap<QString, Attribute *> *Lexer::getSybolTable()
{
    return symbolTable;
}



/**   SEMANTIC ACTIONS   **/
//NULL
void Lexer::A0()
{

}

// Inicializa la cadena que representa al lexema.
void Lexer::A1()
{
    actualLexema=QString(QChar(actualChar));
}

// Aguega el caracter al lexema.
void Lexer::A2()
{
    actualLexema+=QString(QChar(actualChar));
}

// Verifica palabra reservada o longitud del identidicador, lo incorpora a la tabla de simbolos
void Lexer::A3()
{
    actualPos--;
    // Si es una palabra reservada
    if ( reservedWordTable->contains(actualLexema) )
    {
        token = reservedWordTable->value(actualLexema); //retorno el identificador de cada palabra reservada
    }
    else
        // Si no es una palabra reservada
    {
        // Verifico error
        if ( actualLexema.length() > 15 )
        {
            QString lexemaLong=actualLexema;
            // Trunco el identificador a 15 caracteres.
            actualLexema.truncate(15);
            err->putLine("WARNING - El identificador "+lexemaLong+" a sido truncado a "+actualLexema+".");
        }
        else
            if ( ! symbolTable->contains (actualLexema ))
            {
                Attribute* attrib =new Attribute();
                attrib->type="Id";
                symbolTable->insert (actualLexema,attrib);
            }
        token=ID;
    }
}

// Verifica rango de la constante, la incorpora a la tabla de simbolos
void Lexer::A4()
{
    actualPos--;
    // Verifico error
    if( actualLexema.toLongLong(0,10) > 2147483648 )
    {
        err->putLine("Line "+QString::number(actualLine)+": ERROR - Constante fuera de rango.");
        token=-1;
    }
    else
    {
        // Si la constante no esta en la tabla de simbolos
        if ( ! symbolTable->contains (actualLexema))
        {
            Attribute* attrib =new Attribute();
            attrib->type="Cte";
            symbolTable->insert (actualLexema,attrib);
        }
        token=CONST;
    }
}

//Verfico y devuelvo el token del operador correspondiente
void Lexer::A5()
{
    actualLexema+=QString(QChar(actualChar));
    if(actualLexema == "+")
        token = '+';
    else if(actualLexema == "-")
        token = '-';
    else if(actualLexema == "*")
        token = '*';
    else if(actualLexema == "/")
        token = '/';
    else if(actualLexema == "(")
        token = '(';
    else if(actualLexema == ")")
        token = ')';
    else if(actualLexema == ",")
        token = ',';
    else if(actualLexema == ";")
        token = ';';
    else if(actualLexema == ":")
        token = ':';
    else if(actualLexema == "==")
        token = EQU;
    else if(actualLexema == "!=")
        token = NEQ;
    else if(actualLexema == ">=")
        token = GEQ;
    else if(actualLexema == "<=")
        token = LEQ;
}

//Identifica e indica los token < > =
void Lexer::A6(){
    actualPos--;
    if(actualLexema == "<")
        token = '<';
    else if(actualLexema == ">")
        token = '>';
    else if(actualLexema == "=")
        token = '=';
}

//Salto de linea, actualizo la linea actual
void Lexer::A7(){
    actualLine++;
}

//Comentario sin salto de linea, agrego + el caracter correspondiente
void Lexer::A8(){
    actualLexema+="+";
    actualLexema+=QString(QChar(actualChar));
}

//Reconoce fin de cadena cadena
void Lexer::A9(){
    actualLexema+=QString(QChar(actualChar));

    if ( ! symbolTable->contains (actualLexema))
    {
        Attribute* attrib =new Attribute();
        attrib->type="Str";
        actualLexema.remove(0,1);
        actualLexema.remove(actualLexema.size()-1,1);
        symbolTable->insert (actualLexema,attrib);
    }
    token = STR;
}

//Reconoce fin de cadena, precedido por +
void Lexer::A10(){
    actualLexema+="+";
    actualLexema+=QString(QChar(actualChar));
    if ( ! symbolTable->contains (actualLexema))
    {
        Attribute* attrib =new Attribute();
        attrib->type="Str";
        actualLexema.remove(0,1);
        actualLexema.remove(actualLexema.size()-1,1);
        symbolTable->insert (actualLexema,attrib);
    }
    token = STR;
}

//Error carácter invalido
void Lexer::E1(){
    err->putLine( "Line "+ QString::number(actualLine) + ": ERROR - Carácter no válido" + QString(actualChar) + ".");
}

//Error se espera =
void Lexer::E2(){
    err->putLine( "Line "+ QString::number(actualLine) + ": ERROR - Se espera '='.");
}

//Error se espera " para terminar la cadena
void Lexer::E3(){
    err->putLine( "Line "+ QString::number(actualLine) + ": ERROR - Se espera el cierre de la cadena.");
}

//Error se espera \ para comentario
void Lexer::E4()
{
    err->putLine( "Line " + QString::number(actualLine) + ": ERROR - Se espera '\'.");
}
