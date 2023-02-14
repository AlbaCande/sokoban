/*
** EPITECH PROJECT, 2022
** my_putchar.c
** File description:
** function that displays a char
*/

#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}
