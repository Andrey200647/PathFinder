cmake_minimum_required(VERSION 3.16)
project(pathfinder C)

set(CMAKE_C_STANDARD 11)

include_directories(inc)
include_directories(libmx/inc)
link_directories(libmx)

add_executable(pathfinder src/errors/mx_len_of_bridges.c src/errors/mx_error_dup_bridges.c src/errors/mx_error1.c src/errors/mx_error_file_empty.c src/errors/mx_error_file_invalid.c src/errors/mx_error_file_invalid_2.c src/errors/mx_error_file_or_dir.c src/errors/mx_errors_isl.c src/errors/mx_errors_islands.c src/errors/mx_errors_main.c src/main/main.c src/matrix/mx_int_string.c src/errors/mx_big_name.c src/matrix/mx_int_matrix.c src/matrix/mx_city_to_arr.c src/matrix/mx_int_algoritm.c src/matrix/mx_back.c src/matrix/mx_print_path.c src/matrix/mx_find_path.c src/matrix/mx_backtrack_int.c)
target_link_libraries(pathfinder libmx.a)