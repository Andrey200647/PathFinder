#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {

    char *str = (char*)malloc(sizeof(char) * len);
    
    if (mx_strlen(src) >= len) {
        for (int q = 0; q < len; q++) {
		    str[q] = src[q];
	    }
    }
    
    else {
        for (int i = 0; i < mx_strlen(src); i++)
		    str[i] = src[i];
        for (int j = mx_strlen(src); j < len; j++)
            str[j] = '\0';
    }
    dst = str;
    return dst;
    free(dst);
}

// int main(){
// 	char dst[10];
// 	char src[] = "String";
// 	printf("%s\n", mx_strncpy(dst, src, 3));

// }
