#include "libmx.h"


void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
	char* h = (char *)big;

	for (size_t i = 0; i < (big_len - little_len); i++, h++) {
		if (mx_memcmp(h, little, little_len) == 0) {
			return h;
		}
	}
	return NULL;
}

// int main() {
// 	char *big = "Trinity";
// 	char *little = "ini";
//     printf("%s\n", mx_memmem(big, 6, little, 3));
// }
