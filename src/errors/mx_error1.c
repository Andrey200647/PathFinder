#include "pathfinder.h"

void mx_error1(int argc) {
    if (argc != 2) {
        mx_printerr("usage: ./pathfinder [filename]\n");
        exit(1);
    }
}

