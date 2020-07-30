#include  "libmx.h"

void mx_str_reverse(char *s){
int a = mx_strlen(s);
int lenght = a - 1;
int mid = lenght / 2;
        for(int x = 0; x <= mid; lenght--){
        mx_swap_char(&s[lenght], &s[x]);
                x++;
}
}

// int main(){
// char s[] = "game over";
// mx_str_reverse(s);
// printf("%s", s);
// }
