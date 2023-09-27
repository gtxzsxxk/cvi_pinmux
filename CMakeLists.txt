cmake_minimum_required(VERSION 3.10)
project(cvi_pinmux C)

set(CMAKE_C_STANDARD 11)

add_executable(cvi_pinmux src/main.c
        include/pinmux.h
        src/port.c
        include/port.h
        src/pinmux.c
        src/pinmux.c
)
