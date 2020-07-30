#include "libmx.h"

static bool space(char a) {
	if (a == ' ' || a == '\t' || a == '\r' || a == '\n' || a == '\v' || a == '\f' || a == '\b') {
		return true;
	}
	return false;
}


char *mx_strtrim(const char *str) {
	int i = 0;
	int x = mx_strlen(str) -1;
	int j = 0;
	char *result = NULL;

	result = mx_strnew(mx_strlen(str));


	if (!str)
		return NULL;
	while (space(str[i])) {
		i++;
	}
	while (space(x)) {
		x--;
	}
	for (;i <= x; i++) {
		result[j] = str[i];
		j++;
	}
	result = (char *)mx_realloc(result, sizeof(char) * mx_strlen(result) + 1);
return result;
}

// int main(){
// 	char name[] = "\f     My name... is Neo   \t\n  ";
// 	printf("%s", mx_strtrim(name));
// 			system("leaks -q a.out");
// 	return 0;
// }
