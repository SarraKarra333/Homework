TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        backlightedMIDI.cpp \
        main.cpp \
        midi.cpp

HEADERS += \
    backlightedMIDI.h \
    midi.h
