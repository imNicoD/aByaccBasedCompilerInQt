#include "mainwindow.h"
#include <QApplication>

#include "parser.h"
#include "codegen_print.h"
#include "console.h"
#include "stream_double.h"
#include "stream_txt.h"
#include "symboltable.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    if(argc > 1 && QString(argv[1]) == QString("-f"))
    {
        console csl;
        stream_txt txt(QString(argv[2])+".txt");
        stream_double out(&csl, &txt);
        QFile file(argv[2]);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QString s = file.readAll();
            SymbolTable symTable;
            parser p(new Lexer(s, &out, &symTable), &out, new codegen_print(&out), &symTable);
            int r = p.yyparse();
            for (int i=0; i<symTable.size(); i++)
            {
                QList<QString> names= symTable.keys();
                Attribute* aux = symTable.value(names.at(i));
                txt.putLine(names.at(i) + QString(" ") + aux->type);
            }
            return r;
        }else
        {
            // No hay entrada
            return 0;
        }
    }else
    {
        QApplication a(argc, argv);
        MainWindow w;
        w.show();

        return a.exec();
    }
    return 0; // never
}
