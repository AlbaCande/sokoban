/*
** EPITECH PROJECT, 2022
** my_str_isupper.c
** File description:
** function that returns 1 if the string passed as parameter
** only contains uppercase and 0 otherwise
*/

int my_str_isupper(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        if (str[count] > 64 && str[count] < 91) {
        } else {
            return (0);
        }
        count++;
    }
    return (1);
}
