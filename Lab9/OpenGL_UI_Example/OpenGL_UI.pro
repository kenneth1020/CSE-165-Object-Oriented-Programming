#-------------------------------------------------
#
# Project created by QtCreator 2016-05-03T13:59:13
#
#-------------------------------------------------

QT       += core gui opengl openglwidgets

greaterThan(QT_MAJOR_VERSION, 5.4): QT += widgets

CONFIG += c++11

TARGET = MYGL
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    my_gl.cpp

HEADERS  += mainwindow.h \
         /opt/homebrew/Cellar/glfw/3.3.6/include/GLFW \
    my_gl.h

FORMS    += mainwindow.ui

LIBS += -lopengl32 -lglu32 -LD:\Qt\5.5\mingw492_32\lib\libQt5OpenGL.a
#LIBS    += -l/opt/homebrew/Cellar/glfw/3.3.6/libglfw.3.3.dylib
