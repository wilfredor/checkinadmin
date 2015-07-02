# -------------------------------------------------
# Project created by QtCreator 2012-04-22T04:26:31
# -------------------------------------------------
QT += sql
QT += gui debug
TARGET = checkinadmin
TEMPLATE = app
SOURCES += main.cpp \
    chekinadmin.cpp \
    cnfdialog.cpp
HEADERS += chekinadmin.h \
    ../dbConection.h \
    dbConection.h \
    checkablesortfilterproxymodel.h \
    settings.h \
    cnfdialog.h
FORMS += chekinadmin.ui \
    cnfdialog.ui
