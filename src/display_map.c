/*
** EPITECH PROJECT, 2022
** display_map
** File description:
** fucntion to display map with ncurses
*/

#include "my_sokoban.h"

void display_map(map_t *map)
{
    int x = 0;
    int y = 0;
    int count = 0;

    getmaxyx(stdscr, x, y);
    clear();
    if (COLS <= map->col || LINES <= map->rows)
        mvprintw((x / 2), (y - my_strlen("TERMINAL TOO SMALL")
        - 1) / 2, "TERMINAL TOO SMALL");
    else {
        while (map->map[count]){
            mvprintw((x / 2 - map->rows / 2) + count,
            y / 2 - map->col / 2, "%s", map->map[count]);
            count++;
        }
    }
    refresh();
}
