/*
** EPITECH PROJECT, 2022
** restart_map
** File description:
** put map-map_ini into map->map
*/

#include "my_sokoban.h"

void reset_map(map_t *map)
{
    int count = 0;

    while (map->map[count]){
        map->map[count] = my_strcpy(map->map[count], map->ini_map[count]);
        count++;
    }
}
