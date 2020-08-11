#include "pathfinder.h"

int main(int argc, char *argv[]) {
    t_matrix *mat = (t_matrix *)malloc(sizeof(t_matrix));
    bridges **big_array =  mx_big_array_init(argv[1]);

    mx_errors_main(argc, argv, mat);
    mx_int_string(argv[1], mat);
    mx_int_matrix(argv[1], big_array, mat);


    //system("leaks -q pathfinder");
    return 0;

}
