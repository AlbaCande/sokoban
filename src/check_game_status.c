/*
** EPITECH PROJECT, 2022
** check_game_status
** File description:
** function utils for checking if the game is end, and win or lose
*/

#include "my_sokoban.h"

int count_goals(char **map)
{
    int i = 0;
    int j = 0;
    int nb_goals = 0;

    while (map[i]){
        j = 0;
        while (map[i][j])
            (map[i][j] == 'O') ? (nb_goals++, j++) : (j++);
        i++;
    }
    return (nb_goals);
}

int check_box_in_goals(map_t *map)
{
    int i = 1;
    int j = 1;
    int goals_oc = 0;

    while (map->ini_map[i]) {
        j = 0;
        while (map->ini_map[i][j]) {
            (map->ini_map[i][j] == 'O' &&
            map->map[i][j] == 'X') ? (goals_oc++, j++) : (j++);
        }
        i++;
    }
    if (goals_oc == map->nb_goals)
        return (1);
    return (0);
}

int cond_box_blocked(map_t *map, int i, int j)
{
    int hor = 0;
    int vert = 0;

    if (map->ini_map[i][j] == 'O')
        return (0);
    if (map->map[i][j] == 'X'){
        if (map->map[i - 1][j] == '#')
            vert = 1;
        if (map->map[i + 1][j] == '#')
            vert = 1;
        if (map->map[i][j + 1] == '#')
            hor = 1;
        if (map->map[i][j - 1] == '#')
            hor = 1;
    }
    if (hor == 1 && vert == 1)
        return (1);
    return (0);
}

int check_box_blocked(map_t *map)
{
    int i = 0;
    int j = 0;
    int ret = 0;

    while (map->map[i]){
        j = 0;
        while (map->map[i][j]) {
            ret += cond_box_blocked(map, i, j);
            j++;
        }
        i++;
    }
    if (ret == map->nb_goals)
        return (1);
    return (0);
}

int check_game_status(map_t *map)
{
    if (check_box_in_goals(map) == 1)
        return (1);
    if (check_box_blocked(map) == 1)
        return (2);
    return (0);
}
