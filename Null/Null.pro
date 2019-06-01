#greaterThan(QT_MAJOR_VERSION,4):QT += widgets

QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
SOURCES += \
    main.cpp \
    dialog.cpp

HEADERS += \
    dialog.h


FORMS += \
    dialog.ui
