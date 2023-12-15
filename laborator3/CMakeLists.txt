cmake_minimum_required(VERSION 3.26)
project(laborator3)

set(CMAKE_CXX_STANDARD 17)

add_executable(laborator3 main.cpp
        cmake-build-debug/Dreapta.cpp
        cmake-build-debug/Dreapta.h
        cmake-build-debug/Punct.cpp
        cmake-build-debug/Punct.h
        Carte.cpp
        Carte.h)
