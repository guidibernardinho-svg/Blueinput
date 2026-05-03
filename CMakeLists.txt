cmake_minimum_required(VERSION 3.10)
project(Blueinput)

set(CMAKE_CXX_STANDARD 17)

add_executable(Blueinput
    src/main.cpp
    src/app.cpp
    src/input.cpp
    src/network.cpp
)
