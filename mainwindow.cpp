#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    modified = 0;
    connect(ui->TextEditor->document(), SIGNAL(contentsChanged()), this, SLOT(documentWasModified()));
    ui->TextEditor->setVerticalScrollBar(ui->LineNumber->verticalScrollBar());
    lexer = NULL;
    ui->LineNumber->addItem(QString::number(1));
}

void MainWindow::putLine(QString s)
{
    ui->outPutError->append(s);
    //guardo a archivo
}

MainWindow::~MainWindow()
{
    delete ui;
}

//NEW FILE
void MainWindow::on_actionNew_triggered()
{
    if(maybeSave()){
        text = "";
        ui->TextEditor->setPlainText(text);
        modified = 0;
    }
}

//OPEN FILE
void MainWindow::on_actionOpen_triggered()
{
    QString path = QFileDialog::getOpenFileName(this,"Choose Code","Code/", tr("Code (*.code)"));
    if(!path.isEmpty())
    {
        QFile file(path);
        if(file.open(QFile::ReadOnly | QFile::Text))
        {
            currentFile = path;
            QTextStream n(&file);
            text = n.readAll();
            file.close();
            ui->TextEditor->setPlainText(text);
            modified = 0;
        }
    }
}

//SAVE
void MainWindow::on_actionSave_triggered()
{
    if(currentFile.isEmpty())
    {
        QString path = QFileDialog::getSaveFileName(this, "Save File","Code/", tr("Code (*.code)"));
        if(!path.isEmpty())
            currentFile = path;
    }
    QFile file(currentFile);
    if(file.open(QIODevice::WriteOnly | QFile::Text)){
        QTextStream stream(&file);
        stream << ui->TextEditor->toPlainText();
        file.flush();
        file.close();
        modified = 0;
    }
}

//SAVE AS
void MainWindow::on_actionSave_As_triggered()
{
    QString path = QFileDialog::getSaveFileName(this, "Save As File","Code/", tr("Code (*.code)"));

    if(!path.isEmpty()){
        currentFile = path;
        on_actionSave_triggered();
        modified = 0;
    }
}

//CUT
void MainWindow::on_actionCut_triggered()
{
    ui->TextEditor->cut();
}

//COPY
void MainWindow::on_actionCopy_triggered()
{
    ui->TextEditor->copy();
}

//PASTE
void MainWindow::on_actionPaste_triggered()
{
    ui->TextEditor->paste();
}

//UNDO
void MainWindow::on_actionUndo_triggered()
{
    ui->TextEditor->undo();
}


//REDO
void MainWindow::on_actionRedo_triggered()
{
    ui->TextEditor->redo();
}

//SE LLAMA AL CERRAR EL PROGRAMA
void MainWindow::closeEvent(QCloseEvent *event)
{
    if(maybeSave()){
        event->accept();
    }
    else{
        event->ignore();
    }
}

//DESEA GUARDAR
bool MainWindow::maybeSave()
{
    if(modified){
        QMessageBox::StandardButton ret; //es un int con un c�digo
        ret = QMessageBox::warning(this, tr("Compiler"), tr("El documento ha sido modificado.\n Desea guardar los cambios?"),
                                   QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
        if(ret == QMessageBox::Yes)
            on_actionSave_triggered(); //Save
        else if(ret == QMessageBox::Cancel)
            return false;
    }
    return true;
}

//Se activa cuando el documento es modificado
void MainWindow::documentWasModified()
{
    modified=1;
}

#include "parser.h"
#include "console.h"
#include "codegen_tree.h"
#include "stream_double.h"
#include "stream_txt.h"

void MainWindow::on_actionBuild_triggered()
{
    ui->outPutError->setText("");
    this->symTable = new QMap<QString, Attribute*>();
    lexer = new Lexer(ui->TextEditor->toPlainText(), this, symTable);

    //Para la salida a Texto
    stream_txt txt("Result.txt");
    stream_double out(this, &txt);
    codegen_tree tree;
    parser p1(lexer, &out, &tree);
    p1.yyparse();
    for (int i=0; i<symTable->size(); i++)
    {
        QList<QString> names= symTable->keys();
        Attribute* aux = symTable->value(names.at(i));
        txt.putLine(names.at(i) +QString(" ")+ aux->type);
    }
    tree.dump();
}

//Muestra en la Status Bar la linea en la que estoy
void MainWindow::on_TextEditor_cursorPositionChanged()
{
    ui->statusBar->showMessage("Line " + QString::number(ui->TextEditor->textCursor().blockNumber() +1));
}

void MainWindow::on_actionView_Symbol_Table_triggered()
{
    Dialog* ventana = new Dialog(this);
    if (lexer != NULL)
        ventana->addSybolTable(lexer->getSybolTable());
    ventana->show();
}

void MainWindow::on_TextEditor_blockCountChanged(int newBlockCount)
{
    ui->LineNumber->clear();
    for (int i = 1; i <= newBlockCount; i++)
       ui->LineNumber->addItem(QString::number(i));
}
