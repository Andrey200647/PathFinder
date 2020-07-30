#include "pathfinder.h"

void mx_error_file_or_dir(char *str) {
    int filedesc = open(str, O_RDONLY);

    if (filedesc < 0) {
        mx_printerr("error: file ");
        mx_printerr(str);
        mx_printerr(" does not exist\n");
        exit(1);
    }
    close(filedesc);
}
