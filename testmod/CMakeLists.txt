cmake_minimum_required(VERSION 3.20)
project(addtwo)

add_library(addtwo SHARED
    addtwo.c)

target_include_directories(addtwo PUBLIC ../include)
target_compile_definitions(addtwo PRIVATE -DBUILD_LIBRARY)

install(TARGETS addtwo EXPORT addtwo_targets)

# Write targets.cmake for 1-pass integration
export(EXPORT addtwo_targets NAMESPACE shlibtest::
    FILE "${CMAKE_BINARY_DIR}/pkgs/ShlibtestAddtwoTargets.cmake")
configure_file(cmake/ShlibtestAddtwo.cmake
    "${CMAKE_BINARY_DIR}/pkgs/ShlibtestAddtwoConfig.cmake"
    COPYONLY)

