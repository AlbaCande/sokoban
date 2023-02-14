/*
** EPITECH PROJECT, 2022
** my_str_isprintable.c
** File description:
** function that returns 1 if the string passed as parameter
** only contains printable characters and 0 otherwise
*/

int my_str_isprintable(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        if (str[count] < 32)
            return (0);
        count++;
    }
    return (1);
}
