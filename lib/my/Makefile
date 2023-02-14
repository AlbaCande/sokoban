##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## compiles my libmy
##

SRC	=	my_arrlen.c \
		my_compute_power_long.c \
		my_compute_power_rec.c \
		my_compute_square_root.c \
		my_double_to_str.c \
		my_find_prime_sup.c \
		my_getnbr.c \
		my_int_to_str.c \
		my_is_prime.c \
		my_isneg.c \
		my_malloc_ini.c \
		my_nb_len.c \
		my_num_size.c \
		my_put_double.c \
		my_put_nbr.c \
		my_put_uns_int.c \
		my_putchar.c \
		my_putstr.c \
		my_revstr.c \
		my_round_str.c \
		my_showmem.c \
		my_showstr.c \
		my_sort_int_array.c \
		my_split.c \
		my_str_isalpha.c \
		my_str_islower.c \
		my_str_isnum.c \
		my_str_isprintable.c \
		my_str_isupper.c \
		my_str_swap.c \
		my_strcapitalize.c \
		my_strcat.c \
		my_strcmp.c \
		my_strcpy.c \
		my_strdup.c \
		my_strlen.c \
		my_strlowcase.c \
		my_strncat.c \
		my_strncmp.c \
		my_strncpy.c \
		my_strstr.c \
		my_strupcase.c \
		my_swap.c \
		my_printf/conv_base_long.c \
		my_printf/conv_display.c \
		my_printf/conv_display2.c \
		my_printf/conv_display3.c \
		my_printf/conv_display4.c \
		my_printf/flag_getter.c \
		my_printf/my_printf.c \
		my_printf/struct_flags.c \
		my_printf/struct_flags2.c \
		my_free_arr.c

NAME	=	libmy.a

CFLAGS = -I./include/ -g3

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all
