#include  "libmx.h"

// void mx_printchar(char c) {
//     write(1, &c, 1);
// }

// void mx_printint(int n) {
//     if (n == -2147483648) {
//                 mx_printchar('-');
//                 mx_printint(214748364);
//                 mx_printchar('8');
//         }
//         else {
//                 if (n < 0) {
//                         mx_printchar('-');
//                         n *= -1;
//                         mx_printint(n);
//                 }
//                 else if (n >= 10){
//                         mx_printint(n / 10);
//                         mx_printint(n % 10);
//                 }
//                 else {
//                         mx_printchar(n + '0');                      
//                 }
//         }
// }

void mx_foreach(int *arr, int size, void (*f)(int)) {
    int i = 0;

    while (i < size) {
        f(arr[i]);
        i++;
    }
}

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     mx_foreach(arr, 5, mx_printint);
//     return 0;
// }
