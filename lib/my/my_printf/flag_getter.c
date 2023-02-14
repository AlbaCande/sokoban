/*
** EPITECH PROJECT, 2022
** flag_getter
** File description:
** getting the flags from struct and interpreting
*/

#include "my_print.h"

int prec(char *str, int nb)
{
    int res = 0;
    int i = 0;
    if (str[0] != '\0') {
        while (str[i]) {
            res += str[i] -48;
            i++;
        }
    } else
        res = nb;
    return (res);
}
