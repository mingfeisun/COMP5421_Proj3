#-------------------------------------------------
#
# Project created by QtCreator 2016-04-14T22:14:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = svm
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    hpoint.cpp \
    singviewmodel.cpp \
    svminfo.cpp

HEADERS  += mainwindow.h \
    hpoint.h \
    showlabel.h \
    singviewmodel.h \
    svminfo.h

FORMS    += mainwindow.ui \
    svminfo.ui

OTHER_FILES +=

RESOURCES += \
    icon.qrc
