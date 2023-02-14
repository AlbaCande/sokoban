/*
** EPITECH PROJECT, 2022
** my_str_islower.c
** File description:
** function that returns 1 if the string passed as parameter
** only contains lowercase and 0 otherwise
*/

int my_str_islower(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        if (str[count] > 96 && str[count] < 123) {
        } else {
            return (0);
        }
        count++;
    }
    return (1);
}
