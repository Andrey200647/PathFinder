#include "pathfinder.h"

 void mx_int_matrix(char *file, bridges **big_array, t_matrix *mat) {
    int n = 0;
    int len_of_third_array = 0;
    char *string = mx_file_to_str(file);
    while (mat->third_arr[len_of_third_array] != 0)
        len_of_third_array++;
    len_of_third_array--;

    int length = mx_big_name(mat->third_arr, len_of_third_array);
    for (int i = 0; i < len_of_third_array; i++) {
        for (int j = 0; j < len_of_third_array; j++) {
            big_array[n]->path[0] = malloc(sizeof(char) * length);
            big_array[n]->path[1] = malloc(sizeof(char) * length);
            big_array[n]->path[0] = mx_strcpy(big_array[n]->path[0], mat->third_arr[i]);
            big_array[n]->path[1] = mx_strcpy(big_array[n]->path[1], mat->third_arr[j]);
            n++;
        }
    }
    mx_strdel(&string);
}

static void mx_int_dist(char *file, bridges **big_array, int number_of_bridges) {
    char **array;
    int road_dist;
    char *string = open(file, O_RDONLY);
    for (int j = 0; j < number_of_bridges; j++) {
        if ((mx_strcmp(big_array[j]->path[0], array[0]) == 0) && (mx_strcmp(big_array[j]->path[1], array[1]) == 0) && (big_array[j]->distance == -1 || big_array[j]->distance == INF)) {
           // big_array[j]->distance = temp_distance;
        }
        else if ((mx_strcmp(big_array[j]->path[0], array[1]) == 0) && (mx_strcmp(big_array[j]->path[1], array[0]) == 0) && (big_array[j]->distance == -1 || big_array[j]->distance == INF)) {
           // big_array[j]->distance = temp_distance;
        }
        else if ((mx_strcmp(big_array[j]->path[0], big_array[j]->path[1]) == 0) && (big_array[j]->distance == -1)) {
            big_array[j]->distance = 0;
        }
        else if (big_array[j]->distance == -1) {
            big_array[j]->distance = INF;
        }
    }
}



//----------------------------------------------------------------
bridges **mx_big_array_init(char *file) {
    char *string = mx_file_to_str(file);
    int number_of_bridges = mx_atoi(string);
    number_of_bridges = mx_pow(number_of_bridges, 2);
    bridges **big_array = malloc(sizeof(bridges) * number_of_bridges);
    for (int i = 0; i < number_of_bridges; i++) {
        big_array[i] = (bridges *)malloc(sizeof(bridges));
    }
    for (int i = 0; i < number_of_bridges; i++) {
        big_array[i]->distance = -1;
    }
    mx_strdel(&string);
    return big_array;
}




