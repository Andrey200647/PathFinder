#include  "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
   int first = 0;
   int last = size - 1;
   int middle;
    
    while (first <= last) {
        middle = (first + last) / 2;
        if (mx_strcmp(arr[middle], s) < 0) {
            first = middle + 1; 
            (*count)++;
        }
        else if (mx_strcmp(arr[middle], s) == 0) {
            (*count)++; 
            return middle;  
        }
        else {
            last = middle - 1;
            (*count)++;
        }
    }
        while (first > last) {
            (*count) = 0;
            return -1;
        }
        return 0;
}

// int main() {
//     char *arr[6] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//     int count = 0;
//     printf("%d\n", mx_binary_search(arr, 6, "Abc", &count));
//     printf("%d\n", count);
//     return 0;
// }
