#-------------------------------------------------
#
# Project created by QtCreator 2015-07-15T21:01:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Rusty3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp
    #serialport.cpp

HEADERS  += mainwindow.h
    #serialport.h

FORMS    += mainwindow.ui

#QMAKE_LFLAGS += /INCREMENTAL:NO

QT += serialport
QT += network
