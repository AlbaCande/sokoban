/*
** EPITECH PROJECT, 2022
** my_print
** File description:
** my printf copy h file
*/

#ifndef MY_PRINT_H_
    #define MY_PRINT_H_

    #include <stdarg.h>
    #include <stddef.h>
    #include <stdlib.h>
    #include "my.h"

    #define FLAGS "#0- +"
    #define WIDTH "*0123456789"
    #define PRECISION "*0123456789"
    #define LENGTH "hlqLjzZt"
    #define CONV "diouxXeEfFgGaAcsSp%b"
    #define CONV_LEN 21
    #define TRUE 1
    #define FALSE 0
    #define FLAGNUM 16
    #define HEXA_A "0123456789abcdef"
    #define HEXA_B "0123456789ABCDEF"
    #define UNS_NEG 429496728

    typedef struct flags_s {
        char *flags;
        char *width;
        char *precision;
        char *length;
        char *conv;
    } flags_t;

    typedef struct fptr_s {
        char id;
        int (*fp)(va_list *list, flags_t *ret);
    } fptr_t;

    int my_printf(const char *format, ...);
    int handle_s(va_list *list, flags_t *ret);
    int handle_c(va_list *list, flags_t *ret);
    int handle_d(va_list *list, flags_t *ret);
    int handle_per(va_list *list, flags_t *ret);
    int handle_f(va_list *list, flags_t *ret);
    int equal_check(char *res, char *flags, int i);
    int length_check(char *res, char *flags, int i);
    char *length(char *res, flags_t *ret);
    flags_t *struct_flags(char *res);
    int handle_o(va_list *list, flags_t *ret);
    int handle_u(va_list *list, flags_t *ret);
    int handle_x(va_list *list, flags_t *ret);
    int handle_e(va_list *list, flags_t *ret);
    int prec(char *str, int nb);
    char *convert_pointer(int base,
    unsigned long int nb, int *length, char flag);
    int handle_p(va_list *list, flags_t *ret);
    int disp_f(char neg, char *round);
    int display_ld(unsigned long int nb);
    void free_ret(flags_t *ret);
#endif
