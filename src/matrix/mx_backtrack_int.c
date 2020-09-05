//#include "pathfinder.h"
//
//char **mx_backtrack_int(char *file, t_matrix *mat) {
//    int fd = open(file, O_RDONLY);
//    char *temp = mx_read_one_line(fd);
//    int len_of_third_array = mx_atoi(temp);
//    char **array;
//    array = malloc(sizeof(char **) * len_of_third_array);
//    for (int j = 0; j < len_of_third_array; j++) {
//        array[j] = mx_strdup(mat->third_arr[j]);
//    }
//    close(fd);
//    mx_strdel(&temp);
//    return array;
//}

#include "pathfinder.h"

void mx_backtrack_int(char *file, t_matrix *mat, t_main *stct) {
    int fd = open(file, O_RDONLY);
    char *temp = mx_read_one_line(fd);
    int len_of_third_array = mx_atoi(temp);
    stct->count = len_of_third_array;
    stct->arr_v = malloc(sizeof(char **) * len_of_third_array);
    for (int j = 0; j < len_of_third_array; j++) {
        stct->arr_v[j] = mx_strdup(mat->third_arr[j]);
    }
    close(fd);
    mx_strdel(&temp);
}
