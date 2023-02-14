/*
** EPITECH PROJECT, 2022
** my_str_isalpha.c
** File description:
** function that returns 1 if the string passed as parameter
** only contains alphabetical characters and 0 if the string
** contains another type of character
*/

int my_str_isalpha(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        if ((str[count] > 96 && str[count] < 123) ||
            (str[count] > 64 && str[count] < 91)) {
        } else {
            return (0);
        }
        count++;
    }

    return (1);
}
