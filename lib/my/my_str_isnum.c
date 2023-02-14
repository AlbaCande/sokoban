/*
** EPITECH PROJECT, 2022
** my_str_isnum.c
** File description:
** function that returns 1 if the string passed as parameter
** only contains digits and 0 otherwise
*/

int my_str_isnum(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        if (str[count] > 47 && str[count] < 58) {
        } else {
            return (0);
        }
        count++;
    }
    return (1);
}
