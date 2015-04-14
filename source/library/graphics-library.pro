include(../../graphics.pri)

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = lib
TARGET = $$GRAPHICS_LIB_NAME

VERSION = $$GRAPHICS_LIB_VERSION

CONFIG += GRAPHICS_CONFIG

CODECFORSRC = UTF-8

DEFINES += GRAPHICS_LIBRARY

INCLUDEPATH += \
    source

GRAPHICS_PUBLIC_HEADERS = \
    source/graphics/abstractplotitem.h \
    source/graphics/abstractplotlayout.h \
    source/graphics/abstractplotscene.h \
    source/graphics/abstractplotview.h \
    source/graphics/abstractscaleengine.h \
    source/graphics/abstractscale.h \
    source/graphics/commonprerequisites.h \
    source/graphics/datetimescaleengine.h \
    source/graphics/datetimescale.h \
    source/graphics/datetimescaleplotitem.h \
    source/graphics/infiniteplotscene.h \
    source/graphics/interactiveplotitem.h \
    source/graphics/numericscale.h \
    source/graphics/sectionscale.h \
    source/graphics/standardplotitem.h \
    source/graphics/standardplotlayout.h \
    source/graphics/standardplotscene.h \
    source/graphics/standardplotview.h \
    source/graphics/valueadapter.h

GRAPHICS_PRIVATE_HEADERS =

GRAPHICS_SOURCES = \
    source/abstractplotitem.cpp \
    source/abstractplotscene.cpp \
    source/abstractplotview.cpp \
    source/datetimescale.cpp \
    source/datetimescaleengine.cpp \
    source/datetimescaleplotitem.cpp \
    source/infiniteplotscene.cpp \
    source/interactiveplotitem.cpp \
    source/numericscale.cpp \
    source/sectionscale.cpp \
    source/standardplotitem.cpp \
    source/standardplotlayout.cpp \
    source/standardplotscene.cpp \
    source/standardplotview.cpp \
    source/valueadapter.cpp

HEADERS += \
    $$GRAPHICS_PUBLIC_HEADERS \
    $$GRAPHICS_PRIVATE_HEADERS

SOURCES += \
    $$GRAPHICS_SOURCES

INSTALL_HEADERS = \
    $$GRAPHICS_PUBLIC_HEADERS

target.path = $$INSTALL_LIBS_DIR

header.files =  $$INSTALL_HEADERS
header.path = $$INSTALL_INCLUDES_DIR

INSTALLS = target header
