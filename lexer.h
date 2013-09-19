#ifndef LEXER_H
#define LEXER_H

#include <QMap>
#include <QPlainTextEdit>
#include "attribute.h"
#include "lexer_base.h"
#include "stream_base.h"

#define NUM_STATES      9
#define NUM_INPUTS      22

#define F -1  //  Estado final
#define VALIDCHAR           0  //  L
#define DIGITO              1  //  D
#define MAS                 2  //  +
#define MENOS               3  //  -
#define PRODUCTO            4  //  *
#define DIVISION            5  //  /
#define IGUAL               6  //  =
#define MAYOR               7  //  >
#define MENOR               8  //  <
#define ADMIRACION          9  //  !
#define COMILLA             10 //  "
#define PARENTESISABRE      11 //  (
#define PARENTESISCIERRA    12 //  )
#define COMA                13 //  ,
#define PUNTOYCOMA          14 //  ;
#define BARRAINVERTIDA      15 //  \ Barra Invertida
#define FINDELINEA          16 //  \n  New Line
#define ESPACIO             17 //  Blanco
#define TAB                 18 //  \t  Tab
#define OTROS               19 //  OTROS
#define FINARCHIVO          20 //  fin de Archivo
#define DOSPUNTOS           21 //  :

/* Matriz de pasaje de estados del automata */
const int states[NUM_STATES][NUM_INPUTS] =
/*      L , D , + , - , * , / , = , > , < , ! , " , ( , ) , , , ; , \ , \n,   , \t, Otro, EOF : */
{     { 1 , 2 , F , F , F , F , 3 , 3 , 3 , 4 , 7 , F , F , F , F , 5 , 0 , 0 , 0 ,  0  , F , F },    //e0 inicial
      { 1 , 1 , F , F , F , F , F , F , F , F , F , F , F , F , F , F , F , F , F ,  F  , F , F },    //e1 identificador
      { F , 2 , F , F , F , F , F , F , F , F , F , F , F , F , F , F , F , F , F ,  F  , F , F },    //e2 constante
      { F , F , F , F , F , F , F , F , F , F , F , F , F , F , F , F , F , F , F ,  F  , F , F },    //e3 = < > == >= <=
      { F , F , F , F , F , F , F , F , F , F , F , F , F , F , F , F , F , F , F ,  F  , F , F },    //e4 distinto
      { F , F , F , F , F , F , F , F , F , F , F , F , F , F , F , 6 , F , F , F ,  F  , F , F },    //e5 \ posible comentario
      { 6 , 6 , 6 , 6 , 6 , 6 , 6 , 6 , 6 , 6 , 6 , 6 , 6 , 6 , 6 , 6 , 0 , 6 , 6 ,  6  , F , 6 },    //e6 comentario
      { 7 , 7 , 8 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , F , 7 , 7 , 7 , 7 , 7 , F , 7 , 7 ,  7  , F , 7 },    //e7 cadena
      { 7 , 7 , 8 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , F , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 ,  7  , F , 7 },    //e8 cadena con posible salto de linea
};

class Lexer : public lexer_base
{
public:
    Lexer(QString text, stream_base * err, QMap<QString, Attribute*>*);

    virtual int currentLine(){ return actualLine;}
    virtual int currentCol (){ return actualPos ;}

    //Add a reserved word to the Reserverd Word Table
    void addReservedWord(QString word, int value);

    //Search the next token in the text
    virtual int yylex(void);

    /** HACER UN METODO QUE ENVIE LA TABLA DE SIMBOLOS ASI LA MUESTRA POR PANTALLA EL PROGRAMA **/
    //Show Symbol Table
    QMap<QString, Attribute*>* getSybolTable();

private:
    //Elements for reading the text
    int         actualLine;
    int         actualPos;
    QString     actualLexema;
    QString     readingInfo;
    QChar        actualChar;

    int         token;

    stream_base * err;

    //Returns the type of the character given as parameter
    int getCharType(QChar c);

    QMap<QString, int>* reservedWordTable;
    QMap<QString, Attribute*>* symbolTable;

    void (Lexer :: * semanticActions[NUM_STATES][NUM_INPUTS])();

    /**  SEMANTIC ACTIONS  **/
    // NULL
    void A0();

    // Inicializa la cadena que representa al lexema.
    void A1();

    //Agrega el caracter al lexema.
    void A2();

    // Verifica palabra reservada o longitud del identidicador, lo incorpora a la tabla de simbolos
    void A3();

    // Verifica rango de la constante, la incorpora a la tabla de simbolos
    void A4();

    // Inicializa la cadena que representa al lexema e informa del token.
    void A5();

    //Identifica e indica los token < > =
    void A6();

    //Salto de linea, actualizo la linea actual
    void A7();

    //Comentario sin salto de linea, agrego + el caracter correspondiente
    void A8();

    //Reconoce fin de cadena
    void A9();

    //Reconoce fin de cadena, precedido por +
    void A10();

    //Error carctér invalido
    void E1();

    //Error se espera =
    void E2();

    //Error se espera " para terminar la cadena
    void E3();

    //Error se espera \ para comentario
    void E4();
};

#endif // LEXER_H
