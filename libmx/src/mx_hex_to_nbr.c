#include "libmx.h"


bool mx_islower(int c){
if(c >= 97 && c <= 122){
return true;
}
else{
return false;
}
}

bool mx_isupper(int c){
if(c >= 65 && c <= 90){
return true;
}
else{
return false;
}
}


unsigned long mx_hex_to_nbr(const char *hex) {
    int val = 0;
    //int count = 0;
    unsigned long decimal = 0;
    int len = mx_strlen(hex);

    for (int i = 0; hex[i] != '\0'; i++ ){
        if (hex[i] >= '0' && hex[i] <= '9')
            val = hex[i] - 48;
        if (mx_islower(hex[i]))
            val = hex[i] - 97 + 10;
        if (mx_isupper(hex[i]))
            val = hex[i] - 65 + 10;
        --len;
    decimal += val * mx_pow(16,len);

     
    }
    return decimal;
}

// int main() {
    
//     printf("%lu\n", mx_hex_to_nbr(NULL));
//     return 0;
// }
