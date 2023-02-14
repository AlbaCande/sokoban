##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## compile program + lib/my
##

SRC	=	src/main.c \
		src/flag_h.c \
		src/open_map.c \
		src/err_handling.c \
		src/get_map.c \
		src/ini_structs.c \
		src/display_map.c \
		src/movement.c \
		src/move_up.c \
		src/move_down.c \
		src/restart_map.c \
		src/move_left.c \
		src/move_right.c \
		src/set_goals.c \
		src/check_game_status.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

CFLAGS	=	-I./lib/my/include/ -I./include -g -lncurses

all:		$(NAME)

$(NAME):	$(OBJ)
			make all -C lib/my/
			gcc -g3 -o $(NAME) $(OBJ) -L./lib/my -lmy $(CFLAGS)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)
			make fclean -C lib/my/

re:			fclean all
