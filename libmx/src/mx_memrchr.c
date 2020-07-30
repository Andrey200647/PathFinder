#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n){
		char *h = (char *)s;
		size_t i = 0;

	if(mx_get_char_index(h, c) < 0){
		return NULL;
	}

	for(i = n; i >= 0; i--){
		if(h[i] == c) {
			break;
		}
	}

	for(size_t j = 0; j < i; j++){
		h++;
	}
	return h;
}

// int main(){
// 	char *h = "Trinity";
// 	printf ("%s\n", mx_memrchr(h, 'i', 7));
// }

