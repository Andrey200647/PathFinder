#include "pathfinder.h"

int main(int argc, char *argv[]) {
    t_matrix *mat = (t_matrix *)malloc(sizeof(t_matrix));
    t_main stct;
    mx_errors_main(argc, argv, mat);
    mx_int_string(argv[1], mat);
    bridges **big_array =  mx_big_array_init(argv[1], mat);

    mx_algoritm(argv[1], big_array, &stct);
    mx_backtrack_int(argv[1], mat, &stct);
    for (int i = 0; i < stct.count; i++) {
        for (int j = 0; j < stct.count; j++) {
            if (i < j)
                mx_find_all_paths(&stct, i, j);
        }
    }
    return 0;
}
