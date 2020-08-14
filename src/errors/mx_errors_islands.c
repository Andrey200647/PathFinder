#include "pathfinder.h"


static void check_result(int a, int result) {
    if (a != result) {
        mx_printerr("error: invalid number of islands");
        exit(1);
    }
}


char **mx_errors_islands(char *string, t_matrix *mat) {
    int count = 0;
    int non_points;

    int a = mx_atoi(string);
    mx_del_not_alphabet(string);

    int points = mx_count_words(string, ' ');
    mat->array = mx_strsplit(string, ' ');
    for (int i = 0; i < points; i++) {
        for (int j = i + 1; j < points; j++) {
            if (mx_strcmp(mat->array[i], mat->array[j]) == 0  && (mx_strcmp(mat->array[i], "*") != 0 || mx_strcmp(mat->array[j], "*") != 0)) {
                mx_strdel(&mat->array[j]);
                mat->array[j] = mx_strnew(1);
                mat->array[j] = mx_strcpy(mat->array[j], "*");
                count++;
            }
        }
    }
    non_points = points - count;
    check_result(a, non_points);
    return mat->array;
}

