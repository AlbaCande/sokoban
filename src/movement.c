/*
** EPITECH PROJECT, 2022
** movement
** File description:
** functions to handle player's movement
*/

#include "my_sokoban.h"

void handle_move(int event, map_t *map)
{
    if (event == 'w' || event == KEY_UP)
        handle_up(map);
    if (event == 's' || event == KEY_DOWN)
        handle_down(map);
    if (event == 'd' || event == KEY_RIGHT)
        handle_right(map);
    if (event == 'a' || event == KEY_LEFT)
        handle_left(map);
}
