#include "libmx.h"

char *mx_file_to_str(const char *file) {
	char buf = '\0';
	char *n_line;
	int j = 0;

//	if(!file) {
//	    return NULL;
//	}
	int filedesc = open(file, O_RDONLY);
	int i = 0;

	while (read(filedesc, &buf, 1)) {
		j++;
	}
	close(filedesc);
	n_line = mx_strnew(j);

	int filedesc_2 = open(file, O_RDONLY);
	while (read(filedesc, &buf, 1)) {
		n_line[i] = buf;
		i++;
	}
	close(filedesc_2);

	return n_line;
}

// int main(){
// 	printf("%s\n", mx_file_to_str("file.txt"));
// }
