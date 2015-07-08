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
    network/tcpclientcontroller.cpp \
    network/tcpervercontroller.cpp

HEADERS  += mainwindow.h \
    isfdata.h \
    network/tcpclientcontroller.h \
    network/tcpservercontroller.h

FORMS    += mainwindow.ui
