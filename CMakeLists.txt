cmake_minimum_required(VERSION 3.27)
project(majiang)

set(CMAKE_CXX_STANDARD 14)

add_executable(majiang
        main.cpp
        character.h
        character.cpp
        block.cpp
        block.h
        gameRun.cpp
        gameRun.h)
