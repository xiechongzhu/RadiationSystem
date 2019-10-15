#-------------------------------------------------
#
# Project created by QtCreator 2019-09-10T19:27:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Demo
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

CONFIG += c++11

SOURCES += \
        accountform.cpp \
        caccountinfo.cpp \
        caccountmodel.cpp \
        cconfigform.cpp \
        ccontrolinfo.cpp \
        cloginfo.cpp \
        csubsystemwindow.cpp \
        ctaskform.cpp \
        ctaskinfo.cpp \
        form.cpp \
        logsearchform.cpp \
        main.cpp \
        mainwindow.cpp \
        qlogmodel.cpp \
        qtaskdatamodel.cpp

HEADERS += \
        accountform.h \
        caccountinfo.h \
        caccountmodel.h \
        cconfigform.h \
        ccontrolinfo.h \
        cloginfo.h \
        csubsystemwindow.h \
        ctaskform.h \
        ctaskinfo.h \
        form.h \
        logsearchform.h \
        mainwindow.h \
        qlogmodel.h \
        qtaskdatamodel.h

FORMS += \
        accountform.ui \
        cconfigform.ui \
        csubsystemwindow.ui \
        ctaskform.ui \
        form.ui \
        logsearchform.ui \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
