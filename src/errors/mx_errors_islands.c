#include "pathfinder.h"


static void check_result(int a, int result) {
    if (a != result) {
        mx_printerr("error: invalid number of islands");
        exit(1);
    }
}


void mx_errors_islands(char *string) {
    char **arr;
    int count = 0;
    int non_points;

    int a = mx_atoi(string);
    mx_del_not_alphabet(string);
    int points = mx_count_words(string, ' ');
    arr = mx_strsplit(string, ' ');
    for (int i = 0; i < points; i++) {
        for (int j = i + 1; j < points; j++) {
            if (mx_strcmp(arr[i], arr[j]) == 0  && (mx_strcmp(arr[i], "*") != 0 || mx_strcmp(arr[j], "*") != 0)) {
                mx_strdel(&arr[j]);
                arr[j] = mx_strnew(1);
                arr[j] = mx_strcpy(arr[j], "*");
                count++;
            }
        }
    }
    mx_strdel(&string);
    mx_strdel(&arr[points - 1]);
    mx_del_strarr(&arr);
    non_points = points - count;
    check_result(a, non_points);
}

