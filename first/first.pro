QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    popup.cpp \
    todo.cpp

HEADERS += \
    DatabaseCon.h \
    mainwindow.h \
    menu.h \
    popup.h \
    todo.h

FORMS += \
    mainwindow.ui \
    menu.ui \
    popup.ui \
    todo.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

DISTFILES += \
    ../../../../../sqlite/sqlite-tools-win32-x86-3350500/Time4Class.db
