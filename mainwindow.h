#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include "lexer_base.h"
#include "lexer.h"
#include "dialog.h"
#include "stream_base.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow, public stream_base
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void putLine(QString s);
    ~MainWindow();

private slots:

    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void documentWasModified();

    void on_actionBuild_triggered();

    void on_TextEditor_cursorPositionChanged();

    void on_actionView_Symbol_Table_triggered();

    void on_TextEditor_blockCountChanged(int newBlockCount);

private:
    void closeEvent(QCloseEvent *event);
    bool maybeSave();

    Ui::MainWindow *ui;
    QString currentFile;
    QString text;
    bool modified;
    QMap<QString, Attribute*> * symTable;
    Lexer* lexer;
    QFile result;
};

#endif // MAINWINDOW_H
