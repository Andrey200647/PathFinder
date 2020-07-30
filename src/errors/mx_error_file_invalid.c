#include "pathfinder.h"

char *mx_error_file_invalid(int *line_count, char *string) {
    int i;

    if (string[0] == '\n') {
        mx_printerr("error: line 1 is not valid\n");
        free(string);
        exit(1);
    }
    for (i = 0; string[i] != '\n'; i++) {
        (*line_count)++;
        if (!mx_isdigit(string[i])) {
           mx_printerr("error: line 1 is not valid\n");
           free(string);
           exit(1);
        }
    }
    i += 1;
    return string + i;
}
