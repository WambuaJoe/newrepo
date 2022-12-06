cmake_minimum_required(VERSION 3.23)
project(newrepo C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(newrepo
        arrays.c
        bitwise-ops.c
        fileysOps.c
        flowControl.c
        Functions.c
        header.h
        input-output.c
        introduction.c
        pointer.c
        temp.c)
