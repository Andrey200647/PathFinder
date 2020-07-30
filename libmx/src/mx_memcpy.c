#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
	char *i = (char *)dst;
	char *j = (char *)src;
	int c = 0;

		while (n > 0) {
			i[c] = j[c];
			n--;
			c++;
		}
		return dst;
}
// int main(){
// 	const char src[50] = "oejgjgeoogj[ekvpoj";
// 	char dst[50];
// 	mx_memcpy(dst, src, 5);
// 	printf("%s\n", dst);
// }
