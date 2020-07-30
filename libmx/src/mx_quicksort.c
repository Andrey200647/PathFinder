#include "libmx.h"

int mx_quicksort(char **arr, int left, int right){
	int i = left;
	int j = right;
	int c = (i + j) / 2;
	int count = 0;
	
	if(arr == NULL)
		return -1;

	while(i <= j){
		while(mx_strlen(arr[i]) < mx_strlen(arr[c]))
			i++;
		while(mx_strlen(arr[j]) > mx_strlen(arr[c]))
			j--;
		    if (i <= j && mx_strlen(arr[i]) != mx_strlen(arr[j])) {
            char *buf2 = arr[i];
            arr[i] = arr[j];
            arr[j] = buf2;
            count++;
        	}
        	i++;
        	j--;
        if (left < j)
            count += mx_quicksort(arr, left, j);
        if (i < right)
            count += mx_quicksort(arr, i, right);
    }
    return count;
} 

//int main(){
//	char *arr[] = { "Michelangelo", "Donatello", "Leonardo", "Raphael" };
//	printf("%d\n", mx_quicksort(arr, 0, 3));
//}
