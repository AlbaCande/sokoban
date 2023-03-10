/*
** EPITECH PROJECT, 2022
** my_double_to_str
** File description:
** converts a double to a string
*/

#include <stddef.h>

int my_compute_power_rec(int nb, int p);
int my_num_size(int nb);
char *my_strcat(char *dest, char const *src);
char *my_int_to_str(char *str, int nb);
char *my_malloc_ini(int nb);

char *my_double_to_str(char *str, double nb, int precision)
{
    int dec_nb = 0;
    int negative = (nb < 0) ? 1 : 0;
    int num = (int) nb;
    char *num_str = my_malloc_ini(my_num_size(num));
    char *dec_nb_str = NULL;

    precision = my_compute_power_rec(10, precision);
    dec_nb = (int) (nb * precision) % precision;
    num_str = my_int_to_str(num_str, num);
    if (negative == 1)
        str = my_strcat(str, "-");
    str = my_strcat(str, num_str);
    str = my_strcat(str, ".");
    dec_nb_str = my_malloc_ini(my_num_size(dec_nb));
    dec_nb_str = my_int_to_str(dec_nb_str, dec_nb);
    str = my_strcat(str, dec_nb_str);
    return (str);
}
