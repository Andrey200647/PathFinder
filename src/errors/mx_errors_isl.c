#include "pathfinder.h"

void mx_errors_isl (char *string) {
    int points;
    int line_count = 2;
    char **arr;

    mx_del_not_alphabet(string);
    points = mx_count_words(string, ' ');
    arr = mx_strsplit(string, ' ');
    for (int i = 0; i < points; i += 3) {
        if (mx_strcmp(arr[i], arr[i + 1]) == 0) {
            mx_printerr("error: duplicate bridges\n");
            //exit(1);
            line_count++;
        }
    }
    mx_strdel(&arr[points - 1]);
    mx_del_strarr(&arr);
}

