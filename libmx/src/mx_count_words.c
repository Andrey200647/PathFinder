#include "libmx.h"

int mx_count_words(const char *str, char c) {
	int i = 0;
	int j = 0;

		while (*str) {
			if (i == 0 && *str != c) {
				i = 1;
				j++;
			}
			if (*str == c) {
				i = 0;
			}
			str++;
		}
		return j;
}

// int main(){
// 	char str[] = "  follow  *   the  white rabbit ";
// 	printf("%d\n", mx_count_words(str, ' '));
// }
