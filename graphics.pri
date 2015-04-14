
BUILD_DIR   = .build
MOC_DIR     = $$BUILD_DIR
OBJECTS_DIR = $$BUILD_DIR
RCC_DIR     = $$BUILD_DIR
UI_DIR      = $$BUILD_DIR

GRAPHICS_LIB_NAME = graphics

GRAPHICS_LIB_VER_MAJ = 1
GRAPHICS_LIB_VER_MIN = 0
GRAPHICS_LIB_VER_PAT = 0

GRAPHICS_LIB_VERSION = $${GRAPHICS_LIB_VER_MAJ}.$${GRAPHICS_LIB_VER_MIN}.$${GRAPHICS_LIB_VER_PAT}

GRAPHICS_LIB_DIR = $$PWD/source/library/

# set additional configuration options like plugin or static here
# or use qmake GRAPHICS_CONFIG=<your option here>
isEmpty(GRAPHICS_CONFIG): GRAPHICS_CONFIG =

# build included library usage example (YES or NO)
isEmpty(BUILD_EXAMPLE): BUILD_EXAMPLE = YES

# use qmake INSTALL_PREFIX=<custom path> for custom install prefix
isEmpty(INSTALL_PREFIX): INSTALL_PREFIX = /opt/$$GRAPHICS_LIB_NAME-$$GRAPHICS_LIB_VERSION
isEmpty(INSTALL_INCLUDES_DIR): INSTALL_INCLUDES_DIR = $$INSTALL_PREFIX/include
isEmpty(INSTALL_LIBS_DIR): INSTALL_LIBS_DIR = $$INSTALL_PREFIX/lib
