/*
** EPITECH PROJECT, 2022
** struct_flags
** File description:
** creating structures for flags of printf
*/

#include "my_print.h"

// fills flags struct
char *flags(char *res, flags_t *ret)
{
    int i = 0;
    char *flags = my_strdup(FLAGS);
    ret->flags = malloc(sizeof(char) * 2);
    ret->flags[0] = '\0';
    ret->flags[1] = '\0';
    while (res[i]){
        if (equal_check(res, flags, i) == TRUE)
            ret->flags[0] = res[i];
        i++;
    }
    free(flags);
    return (ret->flags);
}

// fills width struct
char *width(char *res, flags_t *ret)
{
    int i = 0;
    char *width = my_strdup(WIDTH);
    ret->width = malloc(sizeof(char) * 2);
    ret->width[0] = '\0';
    ret->width[1] = '\0';
    while (res[i]) {
        if (equal_check(res, width, i) == TRUE && res[i - 1] != '.')
            ret->width[0] = res[i];
        i++;
    }
    free(width);
    return (ret->width);
}

// fills precision struct
char *precision(char *res, flags_t *ret)
{
    int i = 0;
    char *precision = my_strdup(PRECISION);
    ret->precision = malloc(sizeof(char) * 2);
    ret->precision[0] = '\0';
    ret->precision[1] = '\0';
    while (res[i]) {
        if (equal_check(res, precision, i) == TRUE && res[i - 1] == '.')
            ret->precision[0] = res[i];
        i++;
    }
    free(precision);
    return (ret->precision);
}

// fills conv struct
char *conv(char *res, flags_t *ret)
{
    int i = 1;
    char *conv = my_strdup(CONV);
    ret->conv = malloc(sizeof(char) * 2);
    ret->conv[0] = '\0';
    ret->conv[1] = '\0';
    while (res[i]) {
        if (equal_check(res, conv, i) == TRUE)
            ret->conv[0] = res[i];
        i++;
    }
    free(conv);
    return (ret->conv);
}

// main struct fill function
flags_t *struct_flags(char *res)
{
    flags_t *ret = malloc(sizeof(flags_t));
    ret->flags = flags(res, ret);
    ret->width = width(res, ret);
    ret->precision = precision(res, ret);
    ret->length = length(res, ret);
    ret->conv = conv(res, ret);
    ret->flags = flags(res, ret);
    free(res);
    return (ret);
}
