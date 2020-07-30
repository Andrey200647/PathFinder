#include "libmx.h"

void mx_push_back(t_list **list, void *data) {
	t_list *new_tmp;
	t_list *current = *list;

	new_tmp = mx_create_node(data);
	if (current == NULL) {
		*list = new_tmp;
	}
	else {
		while(current->next != NULL) {
			current = current->next;
		}
		current->next = new_tmp;
	}
}

// int main(void) {
// 	t_list *word = mx_create_node("Follow");
// 	mx_push_back(&word, "the");
// 	mx_push_back(&word, "white");
// 	mx_push_back(&word, "rabbit");
// 	 while(word) {
// 	 	printf("%s\n", word -> data);
// 	 	word = word -> next;
// 	 }
// 	return 0;
// }
