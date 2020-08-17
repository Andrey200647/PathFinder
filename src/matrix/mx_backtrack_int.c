#include "pathfinder.h"

void mx_backtrack_int(char *file, t_matrix *mat, t_main *stct) {
    int fd = open(file, O_RDONLY);
    int len_of_third_array = mx_atoi(mx_read_one_line(fd));
    stct->count = len_of_third_array;
    stct->arr_v = malloc(sizeof(char **) * len_of_third_array);
    for (int i = 0; i < len_of_third_array; ++i) {
        stct->arr_v[i] = malloc(sizeof(char *) * 200);
    }
    for (int j = 0; j < len_of_third_array; j++) {
        stct->arr_v[j] = mat->third_arr[j];
    }
    close(fd);
}