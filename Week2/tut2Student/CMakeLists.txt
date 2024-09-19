cmake_minimum_required(VERSION 3.29)
project(24t3_clion_setup)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED On)

add_subdirectory(test)
add_executable(main main.cpp
        Student.cpp
        Student.h)