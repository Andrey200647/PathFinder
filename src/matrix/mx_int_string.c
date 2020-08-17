#include "pathfinder.h"


void mx_int_string(char *file, t_matrix *mat) {
    int i = 0;
    char *string = mx_file_to_str(file);
    int number_of_original_points = 0;
    int a;
    mat->array = mx_errors_islands(string, mat, &a);
    int points = mx_count_words(string, ' ');

    for (int j = 0; j < points; ++j) {
        if (mx_strcmp(mat->array[j], "*") != 0) {
            number_of_original_points++;
        }
    }
    mat->third_arr = malloc(sizeof(char *) * number_of_original_points);
    for (int n = 0; n < points; n++) {
        if (mx_strcmp(mat->array[n], "*") != 0) {
            mat->third_arr[i] = mx_strdup(mat->array[n]);
            i++;
        }
    }
    mx_strdel(&mat->array[points - 1]);
    mx_del_strarr(&mat->array);
    mx_strdel(&string);
}
