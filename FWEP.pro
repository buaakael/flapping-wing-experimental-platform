#-------------------------------------------------
#
# Project created by QtCreator 2020-06-07T10:06:14
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FWEP
TEMPLATE = app


SOURCES += main.cpp\
        mywidget.cpp \
    motion.cpp

HEADERS  += mywidget.h \
    motion.h

FORMS    += mywidget.ui
