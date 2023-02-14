/*
** EPITECH PROJECT, 2022
** my_strdup.c
** File description:
** function that allocates memory and copies the
** string given as argument in it
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *str;
    int length = my_strlen(src);
    int count = 0;

    str = malloc(sizeof(char) * length + 1);
    while (src[count] != '\0') {
        str[count] = src[count];
        count++;
    }
    str[count] = '\0';
    return (str);
}
