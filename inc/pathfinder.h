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
    char **arr;
    char **third_arr;

} t_matrix;

typedef struct bridges {
    char *path[2];
    long distance;
    int n;
}               bridges;


void mx_errors_main(int argc, char *argv[1], t_matrix *mat);
void mx_error1(int argc);
void mx_error_file_or_dir(char *str);
void mx_error_file_empty(char *file);
char *mx_error_file_invalid(int *line_count, char *string);
void mx_error_file_invalid_2(int *line_count, char *string);
char **mx_errors_islands(char *string, t_matrix *mat);
void mx_errors_isl(char *string);
void mx_error_dup_bridges(char *file);
void mx_len_of_bridges(char *file);
void mx_int_string(char *file, t_matrix *mat);
int mx_big_name(char **array, int len);
void mx_int_matrix(char *file, bridges **big_array, t_matrix *mat);
bridges **mx_big_array_init(char *file);





#endif
