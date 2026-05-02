cmake_minimum_required(VERSION 3.10)
project(Blueinput)

set(CMAKE_CXX_STANDARD 17)

find_package(SDL2 REQUIRED)

include_directories(include)

add_executable(Blueinput
    src/main.cpp
    src/app.cpp
    src/network.cpp
)

target_link_libraries(Blueinput SDL2::SDL2)
