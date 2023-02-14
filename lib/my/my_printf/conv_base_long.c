/*
** EPITECH PROJECT, 2022
** utils_display2
** File description:
** needed more space for more functions x2
*/

#include "my_print.h"

char *base_to_hexa(unsigned long int nb, int base, int *length, char flag)
{
    char *str = my_malloc_ini(1);
    str[0] = HEXA_A[nb];
    return (str);
}

char *convert_pointer(int base, unsigned long int nb, int *length, char flag)
{
    int p = 0;
    unsigned long int n = 0;
    char *str = NULL;

    if (nb == 0)
        return (my_strdup("0"));
    while (my_compute_power_long(base, p) != 0 &&
    my_compute_power_long(base, p) <= nb)
        p++;
    p--;
    str = my_malloc_ini(p + 1);
    while (p >= 0) {
        n = nb / my_compute_power_long(base, p);
        nb = nb % my_compute_power_long(base, p);
        str = my_strcat(str, base_to_hexa(n, base, length, flag));
        p--;
    }
    *length = my_strlen(str);
    return (str);
}
