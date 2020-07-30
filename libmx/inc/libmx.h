#ifndef LIBMX_H
#define LIBMX_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <fcntl.h>


typedef struct s_list {
    void *data;
    struct s_list *next;
} 		t_list;

void mx_printchar(char c);
void mx_print_strarr(char **arr, const char *delim);
void mx_printstr(const char *s);
int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);
char *mx_strnew(const int size);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strdup(const char *str);
void mx_strdel(char **str);
char *mx_strcpy(char *dst, const char *src);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strcat(char *s1, const char *s2);
void mx_str_reverse(char *s);
int mx_sqrt(int x);
void mx_printint(int n);
double mx_pow(double n, unsigned int pow);
char *mx_itoa(int number);
void mx_foreach(int *arr, int size, void (*f)(int));
void mx_del_strarr(char ***arr);
int mx_bubble_sort(char **arr, int size);
int mx_binary_search(char **arr, int size, const char *s, int *count);
int mx_quicksort(char **arr, int left, int right);
int mx_get_char_index(const char *str, char c);
char *mx_strndup(const char *s1, size_t n);
void *mx_memset(void *b, int c, size_t len);
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *mx_memccpy(void *restrict dst, const void *restrict src,int c, size_t n);
int mx_memcmp(const void *s1, const void *s2, size_t n);
void *mx_memchr(const void *s, int c, size_t n);
int mx_get_substr_index(const char *str, const char *sub);
void *mx_memrchr(const void *s, int c, size_t n);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_count_substr(const char *str, const char *sub);
char *mx_strstr(const char *s1, const char *s2);
int mx_count_words(const char *str, char c);
char *mx_strtrim(const char *str);
char *mx_del_extra_spaces(const char *str);
void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len);
t_list *mx_create_node(void *data);
void mx_push_front(t_list **list, void *data);
void mx_push_back(t_list **list, void *data);
void mx_pop_front(t_list **head);
void  *mx_memmove(void *dst, const void *src, size_t len);
void *mx_realloc(void *ptr, size_t size);
int mx_list_size(t_list *list);
unsigned longmx_hex_to_nbr(const char *hex);
int mx_list_size(t_list *list);
char **mx_strsplit(const char *s, char c);
void mx_pop_back(t_list **head);
t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *));
char *mx_replace_substr(const char *str, const char *sub, const char *replace);
bool mx_isdigit(int c);
bool mx_is_odd(int value);
bool mx_isalpha(int c);
bool mx_isupper(int c);
bool mx_islower(int c);
int mx_toupper(int c);
int mx_strncmp(const char *s1, const char *s2, int n);
void mx_print_unicode(wchar_t c);
int mx_nbr_length(int num);
void mx_printerr(const char*s);
char *mx_file_to_str(const char *file);
int mx_atoi(const char *str);
char *mx_read_one_line(int file);
void mx_del_not_alphabet(char *string);
bool mx_in_alphabet(char a);


#endif
