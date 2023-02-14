/*
** EPITECH PROJECT, 2022
** my_arrlen
** File description:
** return the length of a char**
*/

int my_arrlen(char **str)
{
    int count = 0;

    while (str[count]) {
        count++;
    }
    return (count);
}
