/*
** EPITECH PROJECT, 2022
** my_strcapitalize.c
** File description:
** a function that capitalizes the first letter of each word
*/

char *my_strcapitalize(char *str)
{
    int count = 0;
    char aux = ' ';

    while (str[count] != '\0') {
        if (str[count] > 64 && str[count] < 91) {
            aux = str[count] + 32;
            str[count] = aux;
        }
        if ((str[count] > 96) && (str[count] < 123) &&
            (count == 0 || (str[count - 1] > 31) && (str[count - 1] < 48))) {
            aux = str[count] - 32;
            str[count] = aux;
        }
        count++;
    }
    return (str);
}
