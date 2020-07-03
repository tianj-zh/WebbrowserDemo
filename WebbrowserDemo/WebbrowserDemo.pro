#-------------------------------------------------
#
# Project created by QtCreator 2015-08-28T10:08:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WebbrowserDemo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

win32:CONFIG(release, debug|release): LIBS += -L$$(FUTURECLASSROOM_ENV)/bin/release/ -lfuture_class_webbrowser2
else:win32:CONFIG(debug, debug|release): LIBS += -L$$(FUTURECLASSROOM_ENV)/bin/debug/ -lfuture_class_webbrowser2
else:unix: LIBS += -L$$(FUTURECLASSROOM_ENV)/bin/ -lfuture_class_webbrowser2

INCLUDEPATH += $$(FUTURECLASSROOM_ENV)
