#include "pathfinder.h"

int mx_big_name(char **array, int len) {
    int result = 0;
    for (int i = 0; i < len; i++) {
        int temp = mx_strlen(array[i]);
        if (temp > result)
            result = temp;
    }
    return result;
}
