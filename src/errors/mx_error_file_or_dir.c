#include "pathfinder.h"

void mx_error_file_or_dir(char *file) {
    int result = open(file, O_RDONLY);

    if (result < 0) {
        mx_printerr("error: file ");
        mx_printerr(file);
        mx_printerr(" does not exist\n");
        exit(1);
    }
    close(result);
}
