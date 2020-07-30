#include "libmx.h"

void mx_push_front(t_list **list, void *data) {
	t_list *new_tmp;

	new_tmp = mx_create_node(data);
	new_tmp-> next = *list;
	*list = new_tmp;
}

// int main(void) {
// 	t_list *word = NULL;
// 	mx_push_front(&word, "the");
// 	mx_push_front(&word, "white");
// 	mx_push_front(&word, "rabbit");
// 	 while(word) {
// 	 	printf("%s\n", word -> data);
// 	 	word = word -> next;
// 	 }
// 	return 0;
// }
