cmake_minimum_required(VERSION 3.20)
project(shlibtestmain)

add_executable(mainexec
    main.c)

target_link_libraries(mainexec addtwo)

