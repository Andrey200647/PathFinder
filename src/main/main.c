#include "pathfinder.h"

int main(int argc, char *argv[]) {
    t_matrix *mat = (t_matrix *)malloc(sizeof(t_matrix));
    mx_errors_main(argc, argv, mat);
    mx_int_string(argv[1], mat);
    bridges **big_array =  mx_big_array_init(argv[1], mat);
    for (int i = 0; i < 25; ++i) {
        mx_printstr(big_array[i]->path[0]);
        mx_printstr(big_array[i]->path[1]);
        mx_printstr("\t\t");
        if (i == 4 || i == 9 || i == 14 || i == 19) {
            printf("\n");
        }
    }
    printf("\n\n\n");
    for (int j = 0; j < 25; ++j) {
        if (big_array[j]->distance == INF)
            mx_printstr("inf");
        else
            mx_printint((int)big_array[j]->distance);
        mx_printstr("\t\t");
        if (j == 4 || j == 9 || j == 14 || j == 19) {
            printf("\n");
        }
    }

    return 0;

}
