#-------------------------------------------------
#
# Project created by QtCreator 2015-06-30T12:06:47
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG+= C++11

TARGET = ISFBrainBoardDummy
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Netzwerk/TCPClientController.cpp \
    Netzwerk/TCPServerController.cpp

HEADERS  += mainwindow.h \
    Netzwerk/TCPClientController.h \
    Netzwerk/TCPServerController.h \
    isfdata.h

FORMS    += mainwindow.ui
