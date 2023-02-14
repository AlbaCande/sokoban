/*
** EPITECH PROJECT, 2022
** get_map
** File description:
** create map of 2 dim
*/

#include "my_sokoban.h"

int get_rows(char *map_one_dim)
{
    int rows = 0;
    int i = 0;

    while (map_one_dim[i]) {
        if (map_one_dim[i] == '\n')
            rows++;
        i++;
    }
    return (rows);
}

int get_col(char *map_one_dim)
{
    int i = 0;
    int col = 0;

    while (map_one_dim[i]) {
        if (map_one_dim[i] == '\n')
            break;
        col++;
        i++;
    }
    return (col);
}

char **get_map(char *map_one_dim)
{
    int rows = get_rows(map_one_dim);
    char **map = malloc(sizeof (char *) * (rows + 1));
    char *temp_row = my_malloc_ini(get_col(map_one_dim));
    int count_row = 0;
    int count_temp = 0;
    int count_map = 0;

    while (count_row < rows) {
        count_temp = 0;
        while (count_temp <= get_col(map_one_dim)) {
            temp_row[count_temp] = map_one_dim[count_map];
            count_map++;
            count_temp++;
        }
        map[count_row] = my_strdup(temp_row);
        count_row++;
    }
    map[count_row] = NULL;
    free(temp_row);

    return (map);
}
