/*
** EPITECH PROJECT, 2022
** flag_h
** File description:
** displaying info about the game (flag -h)
*/

#include "my_sokoban.h"

void display_flag_h(void)
{
    my_putstr("USAGE\n");
    my_putstr("    ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("    map  file representing the warehouse map,");
    my_putstr(" containing '#' for walls,\n         'P' ");
    my_putstr("for the player, 'X' for boxes and 'O' for storage locations.\n");
    my_putstr("COMMANDS\n");
    my_putstr("    [w] || [KEY_UP] -----> Move up.\n");
    my_putstr("    [s] || [KEY_DOWN] ---> Move down.\n");
    my_putstr("    [a] || [KEY_LEFT] ---> Move left.\n");
    my_putstr("    [d] || [KEY_RIGHT] --> Move right.\n");
    my_putstr("    [SPACE] -------------> Restart map.\n");
    my_putstr("    [e] -----------------> Exit game.\n");
}
