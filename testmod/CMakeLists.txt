cmake_minimum_required(VERSION 3.20)
project(addtwo)

add_library(addtwo SHARED
    addtwo.c)

target_include_directories(addtwo PUBLIC ../include)
target_compile_definitions(addtwo PRIVATE -DBUILD_LIBRARY)
