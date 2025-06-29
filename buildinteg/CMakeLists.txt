cmake_minimum_required(VERSION 3.20)
project(buildinteg NONE)

# Add module path
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_BINARY_DIR}/pkgs")

message(STATUS "Prefix = ${CMAKE_PREFIX_PATH}")

add_subdirectory(../testmod testmod)
add_subdirectory(../mainexec mainexec)
