TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    addition.cpp \
    subtraction.cpp \
    multiplication.cpp \
    devision.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    addition.h \
    subtraction.h \
    multiplication.h \
    devision.h

