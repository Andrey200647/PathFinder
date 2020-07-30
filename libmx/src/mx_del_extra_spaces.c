#include "libmx.h"

static bool space(char a) {
	if (a == ' ' || a == '\t' || a == '\r' || a == '\n' || a == '\v' || a == '\f' || a == '\b') {
		return true;
	}
	return false;
}

char *mx_del_extra_spaces(const char *str) {
	int x = 0;
	char *result = mx_strnew(mx_strlen(str));
	free(result);
	char *result2 = mx_strtrim(str);

	for (int i = 0; result2[i]; i++) {
		if (!space(result2[i])) {
			result[x] = result2[i];
			x++;
		}
		if (space(result2[i]) && !space(result2[i +1])) {
			result[x] = ' ';
				x++;
		}
	}
	free(result2);
	result = (char *)mx_realloc(result, sizeof(char) * mx_strlen(result) + 1);
	return result;
}


// int main(){
// 	char name[] = "\f    My name...    is  \t  \r   Neo    \t\n";
// 	//printf("%s", mx_del_extra_spaces(name));
// 	mx_del_extra_spaces(name);
// 		system("leaks -q a.out");
// 	return 0;
// }
