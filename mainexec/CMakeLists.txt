cmake_minimum_required(VERSION 3.20)
project(shlibtestmain)

find_package(ShlibtestAddtwo)

add_executable(mainexec
    main.c)

target_link_libraries(mainexec shlibtest::addtwo)

