QT += core
QT -= gui

CONFIG += c++11

TARGET = linkedList
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    linkedlist.cpp \
    node.cpp

HEADERS += \
    linkedlist.h \
    node.h
