/*
** EPITECH PROJECT, 2022
** my_strncpy.c
** File description:
** Write a function that copies n characters from
** a string into another
*/

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int count = 0;
    int length = 0;

    length = my_strlen(src);
    while (count < n) {
        dest[count] = src[count];
        count++;
    }
    if (n > length)
        dest[count] = '\0';
    return (dest);
}
