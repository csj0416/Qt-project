#-------------------------------------------------
#
# Project created by QtCreator 2018-05-03T23:11:28
#
#-------------------------------------------------

#模块
QT       += core gui  network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TARGET = chenshuai_QT
TEMPLATE = app

RC_FILE = myapp.rc

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main/main.cpp \
    myWidget.cpp \
    twowidget.cpp \
    caidanlanwidget.cpp \
    uicreat.cpp \
    smallwidget.cpp \
    mylabel.cpp \
    csjeventview.cpp \
    mybutton.cpp \
    csjdrawimage.cpp \
    csjtoumingview.cpp \
    csjfileoperations.cpp \
    csjtcpsocket.cpp \
    csjclienttcpsocket.cpp \
    csjimageanimation.cpp \
    csjhttpsview.cpp \
    CSJHttpTool/mynetworkobject.cpp \
    CSJHttpTool/csjnetworktools.cpp \
    CSJTableWidget/csjtableview.cpp \
    CSJCodeTools/csjtools.cpp

HEADERS += \
    myWidget.h \
    twowidget.h \
    caidanlanwidget.h \
    uicreat.h \
    smallwidget.h \
    mylabel.h \
    csjeventview.h \
    mybutton.h \
    csjdrawimage.h \
    csjtoumingview.h \
    csjfileoperations.h \
    csjtcpsocket.h \
    csjclienttcpsocket.h \
    csjimageanimation.h \
    csjhttpsview.h \
    CSJHttpTool/mynetworkobject.h \
    CSJHttpTool/csjnetworktools.h \
    CSJTableWidget/csjtableview.h \
    CSJCodeTools/csjtools.h

FORMS += \
        widget.ui \
    uicreat.ui \
    csjeventview.ui \
    csjdrawimage.ui \
    csjfileoperations.ui \
    csjtcpsocket.ui \
    csjclienttcpsocket.ui \
    csjimageanimation.ui \
    csjhttpsview.ui \
    CSJTableWidget/csjtableview.ui

CONFIG += mobility\
    C++11
MOBILITY =

RESOURCES += \
    image.qrc

