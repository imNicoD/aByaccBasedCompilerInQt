#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMap>
#include"attribute.h"
#include <QDebug>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    void addSybolTable(QMap<QString, Attribute*>* st);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QMap<QString, Attribute*>* symbolTable;
};

#endif // DIALOG_H
