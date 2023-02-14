/*
** EPITECH PROJECT, 2022
** my_isneg.c
** File description:
** displays either N if the integer passed as parameter is negative
** or P, if positive or null
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
    my_putchar('\n');
    return (0);
}
