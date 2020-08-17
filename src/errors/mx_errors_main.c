#include "pathfinder.h"

void mx_errors_main(int argc, char *argv[1], t_matrix *mat) {
    char *string = NULL;
    int line_count = 1;
    char *head = NULL;
    int len_of_mat_array;

    mx_error1(argc);
    mx_error_file_or_dir(argv[1]);
    mx_error_file_empty(argv[1]);
    string = mx_file_to_str(argv[1]);
    head = string;
    string = mx_error_file_invalid(&line_count, string);
    mx_error_file_invalid_2(&line_count, string);
    mx_errors_isl(string);
    string = head;
    mat->array = mx_errors_islands(string, mat, &len_of_mat_array);
    mx_error_dup_bridges(argv[1]);
    mx_len_of_bridges(argv[1]);

    mx_strdel(&mat->array[len_of_mat_array - 1]);
    mx_del_strarr(&mat->array);
    mx_strdel(&string);

}

