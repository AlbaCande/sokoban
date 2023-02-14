/*
** EPITECH PROJECT, 2022
** set_goals
** File description:
** function to set goals into map
*/

#include "my_sokoban.h"

void set_goals(map_t *map)
{
    int i = 1;
    int j = 1;

    while (map->ini_map[i]) {
        j = 0;
        while (map->ini_map[i][j]) {
            (map->ini_map[i][j] == 'O' &&
            map->map[i][j] == ' ') ? (map->map[i][j] = 'O', j++) : (j++);
        }
        i++;
    }
}
