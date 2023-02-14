/*
** EPITECH PROJECT, 2022
** main
** File description:
** main function of my_sokoban
*/

#include "my_sokoban.h"

void free_things(map_t *map, char *map_one_dim)
{
    int i = 0;

    while (map->map[i] && map->ini_map[i]) {
        free(map->map[i]);
        free(map->ini_map[i]);
        i++;
    }
    free(map->player);
    free(map->map);
    free(map->ini_map);
    free(map_one_dim);
}

void checker(map_t *map, int *ret)
{
    if (check_game_status(map) == 1)
        *ret = 1;
    if (check_game_status(map) == 2)
        *ret = 2;
}

int disp_map_loop(map_t *map)
{
    int event = '0';
    int ret = 0;

    keypad(initscr(), TRUE);
    while (ret == 0) {
        set_goals(map);
        map->player = get_player(map->map);
        checker(map, &ret);
        display_map(map);
        event = getch();
        handle_move(event, map);
        if (event == ' ')
            reset_map(map);
        if (event == 'e')
            ret = 3;
        refresh();
    }
    endwin();
    return (ret);
}

int my_sokoban(char *path)
{
    char *map_one_dim = get_str_map(path);
    map_t *map = NULL;
    int ret = 84;

    if (!map_one_dim)
        return (ret);
    map = ini_map(map_one_dim);
    if (!map)
        return (ret);
    ret = disp_map_loop(map);
    free_things(map, map_one_dim);
    if (ret == 1)
        return (0);
    return (1);
}

int main(int argc, char **argv)
{
    if (argc > 2 || argc < 2)
        return (84);
    if (my_strcmp(argv[1], "-h") == 0) {
        display_flag_h();
        return (0);
    }
    if (open_map(argv[1]) == 1)
        return (84);
    return (my_sokoban(argv[1]));
}
