#-------------------------------------------------
#
# Project created by QtCreator 2020-01-27T17:29:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FinalGameProject
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    timer.cpp \
    income.cpp \
    level.cpp \
    job.cpp \
    onejob.cpp \
    country.cpp

HEADERS  += mainwindow.h \
    timer.h \
    income.h \
    level.h \
    job.h \
    onejob.h \
    country.h

FORMS    += mainwindow.ui \
    job.ui \
    country.ui
