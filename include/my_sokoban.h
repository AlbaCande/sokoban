/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** header of my_sokoban
*/

#ifndef MY_SOKOBAN
    #define MY_SOKOBAN

    #include <curses.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <stdint.h>
    #include <unistd.h>
    #include <dirent.h>
    #include <string.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <sys/sysmacros.h>
    #include <fcntl.h>
    #include "my.h"

    // Structures
    typedef struct player_s {
        int x;
        int y;
    } player_t;

    typedef struct map_s {
        char **ini_map;
        char **map;
        int rows;
        int col;
        int nb_goals;
        player_t *player;
    } map_t;

    // Prototypes
    void display_flag_h(void);
    int open_map(char const *filepath);
    char *check_valid_map(char *str_map);
    char *get_str_map(char *path);
    char **get_map(char *map_one_dim);
    int get_max_col(char **map);
    map_t *ini_map(char *map_one_dim);
    void display_map(map_t *map);
    void handle_move(int event, map_t *map);
    int handle_up(map_t *map);
    player_t *get_player(char **map);
    int handle_down(map_t *map);
    void reset_map(map_t *map);
    int handle_left(map_t *map);
    int handle_right(map_t *map);
    void set_goals(map_t *map);
    int count_goals(char **map);
    int check_game_status(map_t *map);

#endif /* !MY_SOKOBAN */
