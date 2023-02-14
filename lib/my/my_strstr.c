/*
** EPITECH PROJECT, 2022
** my_strstr.c
** File description:
** Reproduce the behavior of the strstr function.
*/

#include <stddef.h>

int my_strlen(char const *str);

char *my_strstr(char *str, char const *to_find)
{
    int count_s = 0;
    int count_tf = 0;
    int length = 0;
    int aux = 0;
    int res = 0;

    length = my_strlen(to_find);
    while (str[count_s] != '\0') {
        aux = count_s;
        while (str[count_s] == to_find[count_tf] && to_find[count_tf] != '\0') {
            count_s++;
            count_tf++;
        }
        res = count_s - count_tf;
        if (length == count_tf)
            return (str + res);
        count_s = aux + 1;
        count_tf = 0;
    }
    return (NULL);
}
