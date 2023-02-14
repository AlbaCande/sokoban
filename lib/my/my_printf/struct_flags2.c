/*
** EPITECH PROJECT, 2022
** struct_flags2
** File description:
** struct flags but without coding style
*/

#include "my_print.h"

// checks if a char is a flag
int equal_check(char *res, char *flags, int i)
{
    int j = 0;
    while (flags[j]) {
        if (res[i] == flags[j]) {
            return (TRUE);
        }
        j++;
    }
    return (FALSE);
}

// checks if a char from lenth is a flag
int length_check(char *res, char *flags, int i)
{
    int j = 0;
    while (flags[j]) {
        if (res[i] == 'l' && res[i + 1] == 'l')
            return (-1);
        if (res[i] == flags[j])
            return (TRUE);
        j++;
    }
    return (FALSE);
}

// fills length struct
char *length(char *res, flags_t *ret)
{
    int i = 0;
    char *length = my_strdup(LENGTH);
    ret->length = malloc(sizeof(char) * 3);
    ret->length[0] = '\0';
    ret->length[1] = '\0';
    ret->length[2] = '\0';
    while (res[i]) {
        if (length_check(res, length, i) == TRUE)
            ret->length[0] = res[i];
        if (length_check(res, length, i) == -1) {
            ret->length[0] = res[i];
            ret->length[1] = res[i];
        }
        i++;
    }
    free(length);
    return (ret->length);
}

void free_ret(flags_t *ret)
{
    free(ret->conv);
    free(ret->flags);
    free(ret->length);
    free(ret->precision);
    free(ret->width);
}
