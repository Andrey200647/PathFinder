#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n){
	char *i = (char *)dst;
	char *j = (char *)src;
	size_t a = 0;

	if (n < 0 && c < 0) {
		return NULL;
	}

	while(j[a] != c && a < n){
		i[a] = j[a];
		a++;
		if(a >= n)
		return 0;
	}
	i[a] = c;
	return &i[a];
}

// int main(){

// 	size_t n = 15;
// 	char i[] = "2228eglekgj";
// 	char j[100];
// 	bzero(j, 100);
// 	mx_memccpy(j, i, '8', n);
// 	printf("%s\n", j);
// }
