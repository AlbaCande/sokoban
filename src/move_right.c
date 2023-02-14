/*
** EPITECH PROJECT, 2022
** move_right
** File description:
** function to handle movement right
*/

#include "my_sokoban.h"

void move_right(map_t *map)
{
    if (map->map[map->player->x][map->player->y + 1] == 'O') {
        map->map[map->player->x][map->player->y + 1] = 'P';
        map->map[map->player->x][map->player->y] = ' ';
    }
    if (map->map[map->player->x][map->player->y + 1] == ' ') {
        map->map[map->player->x][map->player->y + 1] = 'P';
        map->map[map->player->x][map->player->y] = ' ';
    }
}

int handle_right(map_t *map)
{
    if (map->player->y + 1 <= 0)
        return (1);
    if (map->map[map->player->x][map->player->y + 1] == '#')
        return (1);
    if (map->map[map->player->x][map->player->y + 1] == 'X'){
        if (map->map[map->player->x][map->player->y + 2] == '#'
        || map->map[map->player->x][map->player->y + 2] == 'X')
            return (1);
        map->map[map->player->x][map->player->y + 2] = 'X';
        map->map[map->player->x][map->player->y + 1] = 'P';
        map->map[map->player->x][map->player->y] = ' ';
    }
    move_right(map);
    return (0);
}
