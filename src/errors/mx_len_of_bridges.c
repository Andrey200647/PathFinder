#include "pathfinder.h"

static void mx_result(long result) {
    if (result > 2147483647) {
        mx_printerr("error: sum of bridges lengths is too big\n");
        exit(1);
    }
}

static void mx_num(char *string) {
    int i = 0;
    while (*string != '\0') {
        if (!mx_isdigit(*string)) {
            *string = ' ';
        }
        string++;
        i++;
    }
}



void mx_len_of_bridges(char *file) {
    char **arr;
    char *string = mx_file_to_str(file);
    int count = 0;
    long result = 0;

    while (*string != '\n') {
        *string = ' ';
        count++;
        string++;
    }
    mx_num(string);
    int point = mx_count_words(string, ' ');

    arr = mx_strsplit(string, ' ');
    for (int i = 0; i < point; i++) {
        result += mx_atoi(arr[i]);
    }
    mx_result(result);
    //mx_strdel(&arr[11]);
    mx_del_strarr(&arr);
    string -= count;
    mx_strdel(&string);

}
