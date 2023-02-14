/*
** EPITECH PROJECT, 2022
** conv_display
** File description:
** needed more space for more functions
*/

#include "my_print.h"

int handle_s(va_list *list, flags_t *ret)
{
    char *a = va_arg(*list, char *);
    int length = 0;
    int precision = prec(ret->precision, my_strlen(a));

    for (int i = 0; i < precision; i++) {
        if (i >= my_strlen(a))
            return (length);
        length += my_putchar(a[i]);
    }
    return (length);
}

int handle_c(va_list *list, flags_t *ret)
{
    char a = va_arg(*list, int);

    return (my_putchar(a));
}

int handle_per(va_list *list, flags_t *ret)
{
    return (my_putchar('%'));
}

int handle_d(va_list *list, flags_t *ret)
{
    int i = 1;
    int neg = 0;
    int nb = 0;
    int length = 0;

    if (ret->length == "l")
        return (display_ld(va_arg(*list, unsigned long int)));
    nb = va_arg(*list, int);
    length = 0;
    if (ret->flags[0] == ' ' && nb >= 0)
        length += my_putchar(' ');
    my_put_nbr(nb);
    if (nb < 0) {
        neg = 1;
        nb *= -1;
    }
    return (my_num_size(nb) + neg + length);
}

int handle_f(va_list *list, flags_t *ret)
{
    double temp = va_arg(*list, double);
    int length = 0;
    char neg = '\0';
    int precision = prec(ret->precision, 6);
    char *round = NULL;

    if (ret->flags[0] == ' ' && temp >= 0)
        length += my_putchar(' ');
    if (temp < 0) {
        neg = '-';
        temp *= -1;
    }
    round = my_malloc_ini(my_num_size((int) temp) + precision + 2);
    round = my_double_to_str(round, temp, precision + 1);
    round = my_round_str(round, my_strlen(round) - 2);
    length += disp_f(neg, round);
    free(round);
    return (length);
}
