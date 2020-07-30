#include "pathfinder.h"

void mx_error_file_empty(char *file) {
    char buf[1];
    int result;
    int len = 0;

    result = open(file, O_RDONLY);
    for (;read(result, buf, 1); len++);
    if (len <= 0) {
        mx_printerr("error: file ");
        mx_printerr(file);
        mx_printerr(" is empty\n");
        close(result);
        exit(1);
    }
}
