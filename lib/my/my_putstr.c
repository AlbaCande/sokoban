/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** Write a function that displays, one-by-one, the characters of a string.
** The address of the string’s first character will be found in the pointer
** passed as a parameter to the function.
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int count = 0;

    while (str[count]) {
        my_putchar(str[count]);
        count++;
    }
    return (0);
}
