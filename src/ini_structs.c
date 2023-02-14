/*
** EPITECH PROJECT, 2022
** ini_structs
** File description:
** function utils to inicialize structures
*/

#include "my_sokoban.h"

player_t *get_player(char **map)
{
    player_t *player = malloc(sizeof(player_t));
    int x = 0;
    int y = 0;
    int exit = 1;

    if (!player)
        return (NULL);
    player->x = x;
    player->y = y;
    while (map[x] && exit == 1) {
        y = 0;
        while (map[x][y] && exit == 1) {
            (map[x][y] == 'P') ? (player->x = x,
            player->y = y, exit = 0) : (y++);
        }
        x++;
    }
    return (player);
}

map_t *ini_map(char *map_one_dim)
{
    map_t *map = malloc(sizeof(map_t));

    if (!map)
        return (NULL);
    map->ini_map = get_map(map_one_dim);
    map->map = get_map(map_one_dim);
    if (!map->ini_map || !map->map)
        return (NULL);
    map->col = get_max_col(map->map);
    map->rows = my_arrlen(map->map);
    map->player = get_player(map->map);
    map->nb_goals = count_goals(map->map);
    return (map);
}
