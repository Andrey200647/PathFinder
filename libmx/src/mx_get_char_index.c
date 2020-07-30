#include "libmx.h"

int mx_get_char_index(const char *str, char c){

	if(!str)
		return -2;

	for(int i = 0; i < mx_strlen(str); i++){
		if(str[i] == c)
		return i;
	}
	return -1;

}
// int main(){
// 	char arr[] = "Follow the white rabbit";
// 	printf("%d\n", mx_get_char_index(arr, 'h'));
// }
