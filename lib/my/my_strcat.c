/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** Write a function that concatenates two strings
*/

char *my_strcat(char *dest, char const *src)
{
    int count_d = 0;
    int count_s = 0;

    while (dest[count_d] != '\0') {
        count_d++;
    }
    while (src[count_s] != '\0') {
        dest[count_d] = src[count_s];
        count_d++;
        count_s++;
    }
    dest[count_d] = '\0';
    return dest;
}
