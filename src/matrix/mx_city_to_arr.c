#include "pathfinder.h"

static void mx_dil_num_and_com(char *string) {
    int count = 0;
    while (*string != '\0') {
        if (!mx_isalpha(*string) && *string != '-') {
            *string = ' ';
        }
        string++;
        count++;
    }
    string -= count;
}

char **mx_append_city_to_arr(char *string) {
    int counter = 0;
    int counter_2 = 0;
    char *temp_str = mx_strdup(string);
    char **array = malloc(2 * 200);
    for (int i = 0; i < 2; ++i) {
        array[i] = mx_strnew(200);
    }
    mx_dil_num_and_com(temp_str);
    while (*temp_str != '-') {
        temp_str++;
        counter++; //3
    }
    temp_str -= counter;
    array[0] = mx_strncpy(array[0], temp_str, counter);
    temp_str += counter + 1;
    counter++;
    while (mx_isalpha(*temp_str)) {
        temp_str++;
        counter_2++;
    }
    temp_str -= counter_2;
    array[1] = mx_strncpy(array[1], temp_str, counter_2);
    temp_str -= counter;
    mx_strdel(&temp_str);
    return array;
}
