cmake_minimum_required(VERSION 3.17)
project(calculate)

set(CMAKE_CXX_STANDARD 14)

add_executable(calculate
        main.cpp printer.cpp printer.h operate.cpp operate.h)
