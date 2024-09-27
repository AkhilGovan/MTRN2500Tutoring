cmake_minimum_required(VERSION 3.29)
project(24t3_clion_setup)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED On)

include_directories(include)

add_subdirectory(src)
add_subdirectory(test)
