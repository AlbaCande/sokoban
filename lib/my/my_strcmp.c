/*
** EPITECH PROJECT, 2022
** my_strcmp.c
** File description:
** Reproduce the behavior of the strcmp function
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int count = 0;

    while ((s1[count] != '\0') && (s2[count] != '\0')) {
        if (s1[count] > s2[count])
            return (1);
        if (s2[count] > s1[count])
            return (-1);
        count++;
    }

    if (my_strlen(s1) > my_strlen(s2))
        return (1);
    if (my_strlen(s1) < my_strlen(s2))
        return (-1);
    return (0);
}
