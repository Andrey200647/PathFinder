#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    char* tmp = (char*)b;

    if (b) {
    while (len--) 
        *tmp++ = c;
    }
    return b;
}

// int main(){
// 	char *a = mx_strnew(3);
// 	mx_memset(a, 34, 3);
// 	printf("%s\n", a);
// 	return 0;
// }
