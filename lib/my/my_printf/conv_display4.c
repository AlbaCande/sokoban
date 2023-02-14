/*
** EPITECH PROJECT, 2022
** conv_display4.c
** File description:
** needed more space for more functions x4
*/

#include "my_print.h"

int disp_f(char neg, char *round)
{
    int length = 0;

    if (neg != '\0')
        length += my_putchar(neg);
    for (int i = 0; i != my_strlen(round) - 1; i++)
        length += my_putchar(round[i]);
    return (length);
}

int display_ld(unsigned long int nb)
{
    unsigned long int num = 1;
    int length = 0;

    while ((nb / num) >= 10 && nb <= 4294967295)
        num = num * 10;
    while (num >= 1) {
        length += my_putchar((nb / num) % 10 + 48);
        num = num / 10;
    }
    return (length);
}
