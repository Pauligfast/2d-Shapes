cmake_minimum_required(VERSION 3.8)
project(source__4_)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        circle.cpp
        circle.h
        complexShape.cpp
        complexShape.h
        display.cpp
        display.h
        graphicalDisplay.cpp
        graphicalDisplay.h
        parallelogram.cpp
        parallelogram.h
        shape.cpp
        shape.h
        textDisplay.cpp
        textDisplay.h
        triangle.cpp
        triangle.h)

add_executable(source__4_ ${SOURCE_FILES})