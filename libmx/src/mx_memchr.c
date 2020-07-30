#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n){
	char *h = (char *)s;
	size_t i = 0;
		for(i = 0; i < n; i++){
			if(*h == c)
				return h;
			h++;
			
		}
		return NULL;

}
// int main(){
// 	char *h = "mem";
// 	printf ("%s\n", mx_memchr(h, 101, 18));
// }
