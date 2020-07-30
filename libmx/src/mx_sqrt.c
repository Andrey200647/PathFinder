#include  "libmx.h"

int mx_sqrt(int x) {
        long s = 1;
        long i = 1;
        long y = x;
                if(x < 0) {
                return 0;
                }
        while(i * s != x) {
        i++;
        s++;
        if (i * s > y) {
                break;
        }
        }
        if(i * s == x) {
                return s;
        }
        else
                return 0;
}
