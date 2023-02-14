/*
** EPITECH PROJECT, 2022
** my_compute_square_root.c
** File description:
** Write a function that returns the square root
** (if it is a whole number) of the number given as argument.
** If the square root is not a whole number, the function should return 0.
*/

int my_compute_power_rec(int nb, int p);

int my_compute_square_root(int nb)
{
    int count = 1;

    if (nb <= 0) {
        return (0);
    }
    while (count > 0) {
        if (my_compute_power_rec(count, 2) == nb) {
            return (count);
        }
        if (my_compute_power_rec(count, 2) > nb) {
            return (0);
        }
        count++;
    }
    return (0);
}
