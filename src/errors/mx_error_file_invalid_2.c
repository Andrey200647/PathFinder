#include "pathfinder.h"

static char *my_error_line_count(int *line_count) {
    char *count;

    count = mx_itoa((int)(*line_count));
    mx_printerr("error: line ");
    mx_printerr(count);
    mx_printerr(" is not valid\n");
    //if (count)
       // free(count);
    exit(1);
}



void mx_error_file_invalid_2(int *line_count, char *string) {
    int i;

    if (*string != '\0') {
        if (string[0] == '\n')
            my_error_line_count(line_count);
        for (i = 0; string[i] != '-'; i++) {
            if (!mx_isalpha(string[i]))
                my_error_line_count(line_count);
        }
        if (!mx_isalpha(string[i - 1]) || !mx_isalpha(string[i + 1]))
            my_error_line_count(line_count);
        for (i = i + 1; string[i] != ','; i++) {
            if (!mx_isalpha(string[i]))
                my_error_line_count(line_count);
        }
        for (i = i + 1; string[i] != '\n'; i++) {
            if (!mx_isdigit(string[i]))
                my_error_line_count(line_count);
        }
//        if (!mx_isalpha(string[i - 1]) || !mx_isdigit(string[i]))
//          my_error_line_count(line_count);
        (*line_count) += 1;
        i += 1;
        mx_error_file_invalid_2(line_count, string + i);
    }
}
