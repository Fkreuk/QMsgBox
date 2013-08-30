TARGET = QMsgBox

TEMPLATE = lib

DEFINES += SRC_LIBRARY

BUILDDIR = ../build

MOC_DIR = $$BUILDDIR/moc
UI_DIR = $$BUILDDIR/ui
OBJECTS_DIR = $$BUILDDIR/obj
RCC_DIRR = $$BUILDDIR/rcc

CONFIG(debug, debug|release) {
     DESTDIR = $$BUILDDIR/debug
 } else {
     DESTDIR = $$BUILDDIR/release
 }

SOURCES += qmsgbox.cpp

HEADERS += qmsgbox.h\
        src_global.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }

    INSTALLS += target
}

RESOURCES += \
    qmsgbox.qrc
