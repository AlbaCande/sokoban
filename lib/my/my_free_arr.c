/*
** EPITECH PROJECT, 2022
** my_free_arr
** File description:
** function that frees the inside of an array
*/

#include "my.h"

void my_free_arr(char **arr)
{
    int i = 0;

    while (i < my_arrlen(arr)) {
        free(arr[i]);
        i++;
    }
}
