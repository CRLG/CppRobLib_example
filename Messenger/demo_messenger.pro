#-------------------------------------------------
#
# Project created by QtCreator 2018-10-30T07:37:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = demo_messenger
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

INCLUDEPATH+= \
        ext/CppRobLib/Communication/Messenger \
        ext/CppRobLib/Communication/DatabaseRobNetwork \
        ext/CppRobLib/Communication/Messenger/MessagesGeneric \
        ext/CppRobLib/Communication/Messenger/MessagesCup2019

SOURCES += \
        main.cpp \
        mainwindow.cpp \
        messenger.cpp \
        messengerevent.cpp \
	databasedemo.cpp \
        comdriver.cpp \
        ext/CppRobLib/Communication/Messenger/databasebase.cpp \
        ext/CppRobLib/Communication/Messenger/messagebase.cpp \
        ext/CppRobLib/Communication/Messenger/transporterbase.cpp \
        ext/CppRobLib/Communication/Messenger/transportergeneric.cpp \
        ext/CppRobLib/Communication/Messenger/MessagesGeneric/message_timestamp_match.cpp \
        ext/CppRobLib/Communication/Messenger/MessagesCup2019/message_experience_status.cpp

HEADERS += \
        mainwindow.h \
        messenger.h \
        messengerevent.h \
        databasedemo.h \
        comdriver.h \
        ext/CppRobLib/Communication/Messenger/databasebase.h \
        ext/CppRobLib/Communication/Messenger/messagebase.h \
        ext/CppRobLib/Communication/Messenger/transporterbase.h \
        ext/CppRobLib/Communication/Messenger/transportergeneric.h \
        ext/CppRobLib/Communication/Messenger/comdriverbase.h \
        ext/CppRobLib/Communication/Messenger/messengerdef.h \
        ext/CppRobLib/Communication/Messenger/messengereventbase.h \
        ext/CppRobLib/Communication/Messenger/MessagesGeneric/message_timestamp_match.h \
        ext/CppRobLib/Communication/Messenger/MessagesCup2019/message_experience_status.h


FORMS += \
        mainwindow.ui

DEFINES += MESSENGER_FULL
