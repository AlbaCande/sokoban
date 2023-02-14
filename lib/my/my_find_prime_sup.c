/*
** EPITECH PROJECT, 2022
** my_find_prime_sup.c
** File description:
** function that returns the smallest prime number that is
** greater than, or equal to, the number given as a parameter.
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int count = nb;

    while (count < 2147483647) {
        if (my_is_prime(count))
            return (count);
        count++;
    }
    return (0);
}
