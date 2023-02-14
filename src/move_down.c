/*
** EPITECH PROJECT, 2022
** move_down
** File description:
** function to handle movement down
*/

#include "my_sokoban.h"

void move_down(map_t *map)
{
    if (map->map[map->player->x + 1][map->player->y] == 'O') {
        map->map[map->player->x + 1][map->player->y] = 'P';
        map->map[map->player->x][map->player->y] = ' ';
    }
    if (map->map[map->player->x + 1][map->player->y] == ' ') {
        map->map[map->player->x + 1][map->player->y] = 'P';
        map->map[map->player->x][map->player->y] = ' ';
    }
}

int handle_down(map_t *map)
{
    if (map->player->x + 1 <= 0)
        return (1);
    if (map->map[map->player->x + 1][map->player->y] == '#')
        return (1);
    if (map->map[map->player->x + 1][map->player->y] == 'X'){
        if (map->map[map->player->x + 2][map->player->y] == '#'
        || map->map[map->player->x + 2][map->player->y] == 'X')
            return (1);
        map->map[map->player->x + 2][map->player->y] = 'X';
        map->map[map->player->x + 1][map->player->y] = 'P';
        map->map[map->player->x][map->player->y] = ' ';
    }
    move_down(map);
    return (0);
}
