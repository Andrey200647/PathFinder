#ifndef PATHFINDER_H
#define PATHFINDER_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <fcntl.h>
#include "libmx.h"

#define INF 2147483647

typedef struct matrix {
    char **array;
    char **third_arr;

} t_matrix;

typedef struct bridges {
    char *path[2];
    long distance;
    int n;
} bridges;

typedef struct      s_main {  // TODO make and fill this structure
    char**          arr_v; // array with all points
    int             count; // number of points
    long**           m_dist; // array after floyd-warshal algorithm
    long**           m_floyd; // array before f-w algorithm
}                   t_main;

typedef struct s_retpath {
    int        size;
    int*       path;
    int        c;
} t_retpath;


void mx_errors_main(int argc, char *argv[1], t_matrix *mat);
void mx_error1(int argc);
void mx_error_file_or_dir(char *str);
void mx_error_file_empty(char *file);
char *mx_error_file_invalid(int *line_count, char *string);
void mx_error_file_invalid_2(int *line_count, char *string);
char **mx_errors_islands(char *string, t_matrix *mat, int *len);
void mx_errors_isl(char *string);
void mx_error_dup_bridges(char *file);
void mx_len_of_bridges(char *file);
void mx_int_string(char *file, t_matrix *mat);
int mx_big_name(char **array, int len);
bridges **mx_big_array_init(char *file, t_matrix *mat);
char **mx_append_city_to_arr(char *string);
void mx_algoritm(char *file, bridges **big_array, t_main *stct);
void mx_ret_trip_output(t_main *stct, t_retpath *stack);
void mx_back_path(t_main *stct, t_retpath *stack);
void mx_find_all_paths(t_main *stct, int st, int end);
void mx_backtrack_int(char *file, t_matrix *mat, t_main *stct);
void mx_matrix_clean(t_matrix *mat, char *file);
char *mx_del_dub(char *string);

#endif
