/*
** EPITECH PROJECT, 2022
** my_is_prime.c
** File description:
** Write a function that returns 1 if the number is prime and 0 if not.
*/

int my_is_prime(int nb)
{
    int count = 2;

    if (nb < count)
        return (0);
    while (nb > count) {
        if (nb % count == 0)
            return (0);
        count++;
    }
    return (1);
}
