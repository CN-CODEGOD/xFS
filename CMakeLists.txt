cmake_minimum_required(VERSION 3.10)

project(XFSProject)

set(CMAKE_CXX_STANDARD 11)

include_directories(src/include)

set(SOURCES
    src/main.cpp
    src/gpu_usage.cpp
    src/cpu_usage.cpp
)

add_executable(XFSProject ${SOURCES})