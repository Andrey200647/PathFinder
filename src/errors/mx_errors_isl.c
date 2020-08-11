#include "pathfinder.h"

static char *my_error_line(int line_count) {
    mx_printerr("error: line ");
    mx_printerr(mx_itoa(line_count));
    mx_printerr(" is not valid\n");
    exit(1);
}

void mx_errors_isl(char *string) {
    int points;
    int line_count = 2;
    char **arr;

    mx_del_not_alphabet(string);
    points = mx_count_words(string, ' ');
    arr = mx_strsplit(string, ' ');
    for (int i = 0; i < points; i += 3) {
        if (mx_strcmp(arr[i], arr[i + 1]) == 0) {
            my_error_line(line_count);
            line_count++;
        }
    }
    mx_strdel(&arr[points - 1]);
    mx_del_strarr(&arr);
}

