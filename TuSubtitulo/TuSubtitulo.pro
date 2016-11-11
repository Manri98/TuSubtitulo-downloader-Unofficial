#-------------------------------------------------
#
# Project created by QtCreator 2016-11-11T21:39:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TuSubtitulo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp

HEADERS  += mainwindow.h \
    dialog.h

FORMS    += mainwindow.ui \
    dialog.ui

RESOURCES += \
    images.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/libs/release/ -ltvdb
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/libs/debug/ -ltvdb
else:unix: LIBS += -L$$PWD/libs/ -ltvdb

INCLUDEPATH += $$PWD/libs
DEPENDPATH += $$PWD/libs

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/libs/release/libtvdb.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/libs/debug/libtvdb.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/libs/release/tvdb.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/libs/debug/tvdb.lib
else:unix: PRE_TARGETDEPS += $$PWD/libs/libtvdb.a
