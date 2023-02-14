/*
** EPITECH PROJECT, 2022
** err_handling
** File description:
** function utils for error handling
*/

#include "my_sokoban.h"

int check_same_box_goal(char *str_map)
{
    int i = 0;
    int count_goal = 0;
    int count_box = 0;

    while (str_map[i]) {
        if (str_map[i] == 'X')
            count_box++;
        if (str_map[i] == 'O')
            count_goal++;
        i++;
    }
    if (count_goal != 0 && count_box != 0 && count_goal == count_box)
        return (1);
    return (0);
}

char *check_valid_map(char *str_map)
{
    int i = 0;
    int count_p = 0;
    int goal_box_ok = 0;

    while (str_map[i]) {
        if (!(str_map[i] == ' ' ||
        str_map[i] == '\n' || str_map[i] == '#' ||
        str_map[i] == 'X' || str_map[i] == 'O' ||
        str_map[i] == 'P'))
            return (NULL);
        if (str_map[i] == 'P')
            count_p++;
        i++;
    }
    goal_box_ok = check_same_box_goal(str_map);
    if (count_p == 1 && goal_box_ok == 1)
        return (str_map);
    return (NULL);
}
