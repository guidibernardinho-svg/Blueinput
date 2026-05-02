cmake_minimum_required(VERSION 3.14)
project(Blueinput)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
    SDL2
    GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
    GIT_TAG release-2.30.9
)

FetchContent_MakeAvailable(SDL2)

include_directories(include)

add_executable(Blueinput
    src/main.cpp
    src/app.cpp
    src/input.cpp
    src/network.cpp
)

target_link_libraries(Blueinput SDL2::SDL2)
