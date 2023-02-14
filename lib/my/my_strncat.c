/*
** EPITECH PROJECT, 2022
** my_strncat.c
** File description:
** function that concatenates n characters of the
** src string to the end of the dest string
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int count_d = 0;
    int count_s = 0;

    while (dest[count_d] != '\0') {
        count_d++;
    }
    while ((src[count_s] != '\0') && (count_s < nb)) {
        dest[count_d] = src[count_s];
        count_d++;
        count_s++;
    }
    dest[count_d] = '\0';
    return dest;
}
