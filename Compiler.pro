#-------------------------------------------------
#
# Project created by QtCreator 2013-09-06T22:25:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Compiler
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    lexer.cpp \
    attribute.cpp \
    dialog.cpp \
    parser.cpp \
    Y_TAB.C \
    console.cpp \
    codegen_print.cpp \
    stream_double.cpp \
    stream_txt.cpp \
    codegen_tree.cpp

HEADERS  += mainwindow.h \
    lexer.h \
    attribute.h \
    dialog.h \
    parser.h \
    lexer_base.h \
    stream_base.h \
    codegen_base.h \
    Y_TAB.H \
    console.h \
    codegen_print.h \
    stream_double.h \
    stream_txt.h \
    codegen_tree.h

FORMS    += mainwindow.ui \
    dialog.ui

RESOURCES += \
    Resources.qrc