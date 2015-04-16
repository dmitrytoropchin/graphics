include(../../graphics.pri)

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app
TARGET = $$GRAPHICS_LIB_NAME-example

INCLUDEPATH += \
    $$GRAPHICS_LIB_DIR/source

LIBS += \
    -L$$GRAPHICS_LIB_DIR -l$$GRAPHICS_LIB_NAME

HEADERS = \
    simpleitem.h

SOURCES = \
    main.cpp
