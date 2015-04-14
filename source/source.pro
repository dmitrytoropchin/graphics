include(../graphics.pri)

TEMPLATE = subdirs
CONFIG += ordered

SUBDIRS = library/graphics-library.pro

equals(BUILD_EXAMPLE, "YES") {
    SUBDIRS += example/graphics-example.pro
}
