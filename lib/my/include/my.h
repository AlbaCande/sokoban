/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** contains the prototypes of all the functions exposed by your libmy.a
*/

#ifndef MY_H_
    #define MY_H_
    #include <errno.h>
    #include <stdarg.h>
    #include <stddef.h>
    #include "my_print.h"
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_nb_len(int nb);
int my_put_nbr(int nb);
int my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *src);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *array, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
char *my_strdup(char const *src);
int my_num_size(int nb);
char *my_malloc_ini(int nb);
int my_put_double(double nb,  int precision);
char *my_int_to_str(char *str, int nb);
int my_put_uns_int(unsigned int nb);
char *my_double_to_str(char *str, double nb, int precision);
char *my_str_swap(char *str, int start, int end);
char *my_round_str(char *str, int pos);
unsigned long int my_compute_power_long(unsigned long int nb, int p);
char **my_split(char const *str, char separator);
int my_arrlen(char **str);
void my_free_arr(char **arr);
#endif
