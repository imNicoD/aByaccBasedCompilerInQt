#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMap>
#include"attribute.h"
#include <QDebug>
#include "symboltable.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    void addSybolTable(SymbolTable* st);
    ~Dialog();

private:
    Ui::Dialog *ui;
    SymbolTable * symbolTable;
};

#endif // DIALOG_H
