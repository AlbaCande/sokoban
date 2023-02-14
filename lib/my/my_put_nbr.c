/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** function that displays the number given as a parameter.
** It must be able to display all the possible values of an int
*/

int my_putchar(char c);

int my_put_nbr(int nb)
{
    int num = 1;
    int length = 0;

    if (nb < 0 && nb >= -2147483648) {
        length += my_putchar('-');
        nb = (-1) * nb;
    }

    while ((nb / num) >= 10 && nb <= 2147483647)
        num = num * 10;
    while (num >= 1) {
        length += my_putchar((nb / num) % 10 + 48);
        num = num / 10;
    }
    return (length);
}
