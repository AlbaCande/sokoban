/*
** EPITECH PROJECT, 2022
** my_int_to_str.c
** File description:
** converts an integer to a string
*/

#include <stdlib.h>

char *my_int_to_str(char *str, int nb)
{
    int num = 1;
    int count = 0;

    if (nb < 0 && nb >= -2147483648) {
        str[count] = '-';
        nb = (-1) * nb;
    }
    while ((nb / num) >= 10 && nb <= 214748364)
        num = num * 10;
    while (num >= 1) {
        str[count] = (nb / num) % 10 + 48;
        num = num / 10;
        count++;
    }
    return (str);
}
