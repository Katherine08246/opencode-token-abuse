cmake_minimum_required(VERSION 3.16)
project(opencode-token-abuse CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(opencodetokenabuse
    src/main.cpp
    src/pool.cpp
    src/rotate.cpp
    src/inject.cpp
    src/cli.cpp
    src/utils.cpp
)

target_include_directories(opencodetokenabuse PRIVATE include)

if(WIN32)
    target_link_libraries(opencodetokenabuse PRIVATE userenv)
endif()
