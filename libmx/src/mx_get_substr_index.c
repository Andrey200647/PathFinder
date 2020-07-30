#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub){
	const char *tmp;
	const char *s;
	int i = 0;

	if(!str || !sub)
		return -2;

	tmp = sub;
	while (*str) {
		s = str;
		while (*(str++) == *(sub++)) {
			if (!(*sub))
				return i;
		}
		sub = tmp;
		i++;
	}
	return -1;

}

// int main(){
// 	char str[20] = "McronDaldos";
// 	printf("%d\n", mx_get_substr_index(str, "on"));
// }
