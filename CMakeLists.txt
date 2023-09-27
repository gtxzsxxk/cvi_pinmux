cmake_minimum_required(VERSION 3.10)
project(cvi_pinmux C)

set(CMAKE_C_STANDARD 11)

option(HOST_DEBUG "option for the host to debug" ON)
if (HOST_DEBUG)
    add_definitions(-DHOST_DEBUG)
endif(HOST_DEBUG)


add_executable(cvi_pinmux src/main.c
        include/pinmux.h
        src/port.c
        include/port.h
)
