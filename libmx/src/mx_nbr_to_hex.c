#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
   // unsigned long dec;
    int i = 0;
    int temp = 0;
    int len = 0;
    char *s = mx_strnew(len);

    while (nbr != 0) {
        temp = nbr % 16;

        if (temp < 10) {
            s[i] = temp + 48;
            i++;
        }
        else {
            s[i] = temp + 87;
            i++;
        }
        nbr = nbr/16;
    }
    mx_str_reverse(s);
    return s;
}

// int main(){
//     unsigned long nbr = 1000;
//     char *s = mx_nbr_to_hex(nbr);
//     printf("%s\n", s);
// }
