/*
** EPITECH PROJECT, 2022
** open_map
** File description:
** function utils to open file with map
*/

#include "my_sokoban.h"

int open_map(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1) {
        close(fd);
        return (1);
    }
    close(fd);
    return (0);
}

unsigned long int get_size_map(char *path)
{
    unsigned long int size;
    struct stat sb;

    if (stat(path, &sb) == -1)
        return (-1);
    return (sb.st_size);
}

char *get_str_map(char *path)
{
    int fd = open(path, O_RDONLY);
    unsigned long int size = get_size_map(path);
    char *str_map = NULL;

    if (fd == -1 || size == -1)
        return (NULL);
    str_map = malloc(sizeof(char) * (size + 1));
    if (!str_map)
        return (NULL);
    read(fd, str_map, size);
    str_map[size] = '\0';

    return (check_valid_map(str_map));
}
