/*
** EPITECH PROJECT, 2022
** conv_display3
** File description:
** needed more space for more functions x3
*/

#include "my_print.h"

char *less(char *str, double nb, int precision, int *i)
{
    while (nb <= 1) {
        nb *= my_compute_power_rec(10, 1);
        (*i)--;
    }
    str = my_double_to_str(str, nb, precision + 1);
    str = my_round_str(str, my_strlen(str) - 2);
    return (str);
}

char *more(char *str, double nb, int precision, int *i)
{
    while (nb >= 10) {
        nb /= my_compute_power_rec(10, 1);
        (*i)++;
    }
    str = my_double_to_str(str, nb, precision + 1);
    str = my_round_str(str, my_strlen(str) - 2);
    return (str);
}

int display_e(char neg, char *str, char flag, int *i)
{
    int length = 0;

    if (neg == '-')
        length += my_putchar(neg);
    for (int i = 0; i != my_strlen(str) - 1; i++)
        length += my_putchar(str[i]);
    length += my_putchar(flag);
    if (*i < 0) {
        length += my_putchar('-');
        length += my_put_nbr(0);
        length += my_put_nbr(*i * -1);
    } else {
        length += my_putchar('+');
        length += my_put_nbr(0);
        length += my_put_nbr(*i);
    }
    return (length);
}

int handle_e(va_list *list, flags_t *ret)
{
    double nb = va_arg(*list, double);
    int precision = prec(ret->precision, 6);
    char neg = '\0';
    int length = 0;
    int i = 0;
    char *str;

    str = my_malloc_ini(precision + 3);
    if (nb < 0) {
        neg = '-';
        nb *= -1;
    }
    if (nb < 1 && nb != 0)
        str = less(str, nb, precision, &i);
    else
        str = more(str, nb, precision, &i);
    length = display_e(neg, str, ret->conv[0], &i);
    free(str);
    return (length);
}

int handle_p(va_list *list, flags_t *ret)
{
    unsigned long int nb = va_arg(*list, unsigned long int);
    int length = 0;
    char *str = convert_pointer(16, nb, &length, 'x');
    length += my_putstr("0x");
    length += my_putstr(str);
    free(str);
    return (length);
}
