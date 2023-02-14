/*
** EPITECH PROJECT, 2022
** my_strncmp.c
** File description:
** Reproduce the behavior of the strncmp function
*/

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int count = 0;

    while (count <= n) {
        if (s1[count] > s2[count])
            return (s1[count] - s2[count]);
        if (s2[count] > s1[count])
            return (s1[count] - s2[count]);
        count++;
    }
    if (my_strlen(s1) > my_strlen(s2))
        return (s1[count] - s2[count]);
    if (my_strlen(s1) < my_strlen(s2))
        return (s1[count] - s2[count]);
    return (0);
}
