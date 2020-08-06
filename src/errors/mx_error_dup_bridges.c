#include "pathfinder.h"

void mx_bridges(char *string) {
    int count = 0;
    while (*string != '\0') {
        if (!mx_in_alphabet(*string) && *string != '-') {
            *string = ' ';
        }
        string++;
        count++;
    }
    string -= count;
}

void mx_error_dup_bridges(char *file) {
    char **arr;
    char *string = mx_file_to_str(file);
    mx_bridges(string);
    int points = mx_count_words(string, ' ');
    arr = mx_strsplit(string, ' ');
    for (int i = 0; i < points; i++) {
        for (int j = i + 1; j < points; j++) {
            if (mx_strcmp(arr[i], arr[j]) == 0) {
                mx_printerr("error: duplicate bridges\n");
                exit(1);
            }
        }
    }
    mx_strdel(&string);
    mx_strdel(&arr[points - 1]);
    mx_del_strarr(&arr);
}
