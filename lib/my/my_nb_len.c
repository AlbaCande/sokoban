/*
** EPITECH PROJECT, 2022
** my_nb_len
** File description:
** finding the char length of ints
*/

int my_nb_len(int nb)
{
    int i = 1;

    if (nb < 0)
        nb = nb * (-1);
    while (nb >= 10) {
        nb = nb / 10;
        i++;
    }
    return (i);
}
