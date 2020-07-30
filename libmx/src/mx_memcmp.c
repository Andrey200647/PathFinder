#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n){
	char *i = (char *)s1;
	char *j = (char *)s2;
	
		for(size_t c = 0; c < n; c++){
			if(i[c] != j[c])
				return i[c] - j[c];
		}
		return 0;
}
// int main(){
// 	char s1[] = "ggggg";
// 	char s2[] = "gggGg";
// 	printf("%d\n", mx_memcmp(s1, s2, 3));
// }
