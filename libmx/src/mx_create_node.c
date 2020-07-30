#include "libmx.h"
 
t_list *mx_create_node(void *data) {
	t_list *tmp = (t_list*)malloc(sizeof(t_list));
	tmp->data = data;
	tmp->next = NULL;
	return tmp;
}

// int main(){
// 	t_list *tmp = mx_create_node("Andrey Nechytail");
// 	printf("%s\n", tmp->data);
// 	return 0;
// }
