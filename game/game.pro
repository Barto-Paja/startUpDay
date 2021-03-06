#-------------------------------------------------
#
# Project created by QtCreator 2018-07-24T15:55:36
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = game
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    character.cpp \
    formcharacter.cpp \
    bot.cpp \
    newgameform.cpp \
    formrobot.cpp \
    formgamestates.cpp \
    formskilltree.cpp \
    formarena.cpp \
    databasemanagementlite.cpp \
    gamestates.cpp \
    formseticon.cpp \
    fight\mechanismfight.cpp \
    fight/hpmanagement.cpp \
    fight/damagemanagement.cpp \
    formnewrobot.cpp \
    DataBase/queryaccount.cpp \
    DataBase/querystatsmanager.cpp \
    DataBase/querycharacter.cpp \
    formmenuingame.cpp \
    robot.cpp \
    gamesession.cpp

HEADERS += \
        mainwindow.h \
    character.h \
    formcharacter.h \
    bot.h \
    newgameform.h \
    formrobot.h \
    formgamestates.h \
    formskilltree.h \
    formarena.h \
    databasemanagementlite.h \
    gamestates.h \
    formseticon.h \
    fight\mechanismfight.h \
    fight/hpmanagement.h \
    fight/damagemanagement.h \
    formsstackmanagement.h \
    formnewrobot.h \
    DataBase/queryaccount.h \
    DataBase/querystatsmanager.h \
    DataBase/querycharacter.h \
    statisticsmap.h \
    charactersmap.h \
    formmenuingame.h \
    robot.h \
    gamesession.h \
    DataBase/columns.h

FORMS += \
        mainwindow.ui \
    formcharacter.ui \
    newgameform.ui \
    formrobot.ui \
    formgamestates.ui \
    formskilltree.ui \
    formarena.ui \
    formseticon.ui \
    formnewrobot.ui \
    formmenuingame.ui

DISTFILES +=

RESOURCES += \
    resources.qrc
