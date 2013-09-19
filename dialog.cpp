#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

void Dialog::addSybolTable(QMap<QString, Attribute *> *st)
{
    symbolTable = st;
    for (int i=0; i<symbolTable->size(); i++)
    {
        QList<QString> names= symbolTable->keys();
        Attribute* aux = symbolTable->value(names.at(i));
        QTableWidgetItem *item1 = new QTableWidgetItem(names.at(i));
        /** cargar atributos **/
        QTableWidgetItem *item2 = new QTableWidgetItem(aux->type);
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,0,item1);
        ui->tableWidget->setItem(i,1,item2);
    }
}

Dialog::~Dialog()
{
    delete ui;
}
