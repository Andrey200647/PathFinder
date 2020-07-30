#include "libmx.h"

char *mx_strchr(const char *s, int c){
        while(*s){
        if(*s == (char) c){
        return (char *) s;
        }
        s++;
        }
        if(c == '\0'){
        return "";
        }
else{
return 0;}
}

int mx_strncmp(const char *s1, const char *s2, int n){
   	int i = 0;
	while(i != n){
		if(s1[i] == s2[i]){
		i++;
		}
	else{
	return s1[i] - s2[i];
	}
	}
return 0;
}


char *mx_strstr(const char *s1, const char *s2) {
int len = mx_strlen(s1);
	if(mx_strncmp(s1, s2, len) == 0){
	return mx_strchr(s1, s1[0]);
	}
		for(; *s1 != 0; s1 += 1){
		if(*s1 == *s2){
		break;
		}
		continue;
		}
	return mx_strchr(s1, s1[0]);
}
// int main(){
// char s1[11] = "0123456789";
// char s2[10] = "345";
// printf("%s", mx_strstr(s1, s2));
// return 0;
// }
