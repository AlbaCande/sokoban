/*
** EPITECH PROJECT, 2022
** conv_display2.c
** File description:
** needed more space for more functions x2
*/

#include "my_print.h"

char *base_to_str(int nb, int base, char flag)
{
    char *str = my_malloc_ini(1);

    if (flag == 'X') {
        str[0] = HEXA_B[nb];
        return (str);
    }
    if (base == 8)
        str[0] = nb + 48;
    if (base == 10)
        str[0] = nb + 48;
    if (base == 16)
        str[0] = HEXA_A[nb];
    return (str);
}

char *convert_base(int base, unsigned long int nb, int *length, char flag)
{
    int p = 0;
    int n = 0;
    char *str = NULL;

    if (nb == 0)
        return (my_strdup("0"));
    while (my_compute_power_rec(base, p) != 0 &&
    my_compute_power_rec(base, p) <= nb)
        p++;
    p--;
    str = my_malloc_ini(p + 1);
    while (p >= 0) {
        n = nb / my_compute_power_rec(base, p);
        nb = nb % my_compute_power_rec(base, p);
        str = my_strcat(str, base_to_str(n, base, flag));
        p--;
    }
    *length = my_strlen(str);
    return (str);
}

int handle_o(va_list *list, flags_t *ret)
{
    int length = 0;
    unsigned int nb = (unsigned int) va_arg(*list, int);

    char *str = convert_base(8, nb, &length, ret->conv[0]);
    if (ret->flags[0] == '#' && str[0] != '0')
        length += my_putchar('0');
    length += my_putstr(str);
    free(str);
    return (length);
}

int handle_u(va_list *list, flags_t *ret)
{
    int length = 0;
    unsigned int nb = (unsigned int) va_arg(*list, int);

    char *str = convert_base(10, nb, &length, ret->conv[0]);
    length += my_putstr(str);
    free(str);
    return (length);
}

int handle_x(va_list *list, flags_t *ret)
{
    int length = 0;
    unsigned int nb = (unsigned int) va_arg(*list, int);

    char *str = convert_base(16, nb, &length, ret->conv[0]);
    if (ret->flags[0] == '#' && str[0] != '0') {
        length += my_putchar('0');
        length += my_putchar(ret->conv[0]);
    }
    length += my_putstr(str);
    free(str);
    return (length);
}
