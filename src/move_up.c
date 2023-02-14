/*
** EPITECH PROJECT, 2022
** move_up
** File description:
** function to handle movement up
*/

#include "my_sokoban.h"

void move_up(map_t *map)
{
    if (map->map[map->player->x - 1][map->player->y] == 'O') {
        map->map[map->player->x - 1][map->player->y] = 'P';
        map->map[map->player->x][map->player->y] = ' ';
    }
    if (map->map[map->player->x - 1][map->player->y] == ' ') {
        map->map[map->player->x - 1][map->player->y] = 'P';
        map->map[map->player->x][map->player->y] = ' ';
    }
}

int handle_up(map_t *map)
{
    if (map->player->x - 1 <= 0)
        return (1);
    if (map->map[map->player->x - 1][map->player->y] == '#')
        return (1);
    if (map->map[map->player->x - 1][map->player->y] == 'X'){
        if (map->map[map->player->x - 2][map->player->y] == '#'
        || map->map[map->player->x - 2][map->player->y] == 'X')
            return (1);
        map->map[map->player->x - 2][map->player->y] = 'X';
        map->map[map->player->x - 1][map->player->y] = 'P';
        map->map[map->player->x][map->player->y] = ' ';
    }
    move_up(map);
    return (0);
}
