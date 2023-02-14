/*
** EPITECH PROJECT, 2022
** my_prinf
** File description:
** a complete and perfect copy of printf
*/

#include "my_print.h"

fptr_t arr[FLAGNUM] = {
    {'c', &handle_c},
    {'%', &handle_per},
    {'s', &handle_s},
    {'d', &handle_d},
    {'i', &handle_d},
    {'f', &handle_f},
    {'F', &handle_f},
    {'o', &handle_o},
    {'u', &handle_u},
    {'x', &handle_x},
    {'X', &handle_x},
    {'e', &handle_e},
    {'E', &handle_e},
    {'p', &handle_p},
    {'g', &handle_f},
    {'G', &handle_f}
};

// returns where conv flags is
int conv_check(char *str)
{
    int i = 0;
    while (i <= FLAGNUM && str[0] != arr[i].id)
        i++;
    return (i);
}

// if done checking one group of flags go next
void end_checker(int *count_str, int *count_f)
{
    (*count_str)++;
    if (*count_str == my_strlen(CONV)) {
        (*count_f)++;
        *count_str = 0;
    }
}

// grabs all the differnt flags
char *include(const char *format, int *val_ok, int *count_str, int *count_f)
{
    int count_res = 0;
    int i = *count_f;
    char *res = malloc(sizeof(char) * my_strlen(format) + 1);
    char *str = my_strdup(CONV);
    while ((format[i] && format[i] != '%') ||
    (format[i] == '%' && format[i - 1] == '%'))
        i--;
    if (format[*count_f] == str[*count_str]) {
        count_res = 0;
        while (i <= *count_f) {
            res[count_res] = format[i];
            count_res++;
            i++;
        }
        res[count_res] = '\0';
        (*val_ok) = 0;
    } else
        end_checker(count_str, count_f);
    free(str);
    return (res);
}

// logic if the char is %
char *if_percent(const char *format, int *count_f, char *res)
{
    int count_str = 0;
    int val_ok = 1;
    char *str = my_strdup(CONV);

    (*count_f)++;
    while (format[*count_f] && str[count_str] && val_ok != 0) {
        res = include(format, &val_ok, &count_str, count_f);
    }
    free(str);
    return (res);
}

// main function
int my_printf(const char *format, ...)
{
    int count_f = 0;
    int arr_pos = 0;
    int length = 0;
    char *res = NULL;
    flags_t *ret = NULL;
    va_list list;

    va_start(list, format);
    while (format[count_f]) {
        if (format[count_f] == '%') {
            ret = struct_flags(if_percent(format, &count_f, res));
            arr_pos = conv_check(ret->conv);
            length += arr[arr_pos].fp(&list, ret);
        } else
            length += my_putchar(format[count_f]);
        count_f++;
    }
    free_ret(ret);
    free(ret);
    return (length);
}
