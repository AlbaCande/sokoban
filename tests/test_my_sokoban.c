/*
** EPITECH PROJECT, 2022
** test_my_sokoban
** File description:
** unit test for my_sokoban
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_sokoban.h"

void redirect_all_std (void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test (sokoban, check_player_position)
{
    struct map_s *map;
    char *map_str = my_strdup(" ##########\n"\
    "# #\n"\
    "# #\n"\
    "# PXO ###\n"\
    "# #\n"\
    "# OX #\n"\
    " ##########\n");

    map = ini_map(map_str);

    cr_assert_neq(map->player, NULL);
    cr_assert_eq(map->player->x, 2);
    cr_assert_eq(map->player->y, 3);
    free(map_str);
    free(map);
}
