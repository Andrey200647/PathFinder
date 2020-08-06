cmake_minimum_required(VERSION 3.16)
project(pathfinder C)

set(CMAKE_C_STANDARD 11)

include_directories(inc)
include_directories(libmx/inc)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.c")
file(GLOB_RECURSE HEADERS RELATIVE ${CMAKE_SOURCE_DIR} "inc/*.h")
file(GLOB_RECURSE LIB RELATIVE ${CMAKE_SOURCE_DIR} "libmx/src/*.c")
file(GLOB_RECURSE LIB_HEADERS RELATIVE ${CMAKE_SOURCE_DIR} "libmx/inc/*.h")

add_executable(pathfinder src/main/main.c src/errors/mx_errors_main.c src/errors/mx_errors_islands.c src/errors/mx_errors_isl.c src/errors/mx_error_file_or_dir.c src/errors/mx_error_file_invalid_2.c src/errors/mx_error_file_invalid.c src/errors/mx_error_file_empty.c src/errors/mx_error1.c src/errors/mx_error_dup_bridges.c ${SOURCES} ${LIB} ${HEADERS} ${LIB_HEADERS})