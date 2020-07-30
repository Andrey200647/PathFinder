#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    char *dst = mx_strnew(n);

    if (dst == 0)
        return 0;
    
    if (sizeof(char) * mx_strlen(s1) >= n)
        for (size_t i = sizeof(char) * 0; i < n; i++) 
            dst[i] = s1[i];
    else {
        for (int i = sizeof(char) * 0; i < mx_strlen(s1); i++)
            dst[i] = s1[i];
        for (size_t j = sizeof(char) * mx_strlen(s1); j < n; j++)
            dst[j] = '\0';
    }
    return dst;
    free(dst);
}

// int main() {
//     char str[] = "Hello World";
    
//     printf("%s", mx_strndup(str, 2));
//     return 0;
// }

