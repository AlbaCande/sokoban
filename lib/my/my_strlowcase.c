/*
** EPITECH PROJECT, 2022
** my_strupcase.c
** File description:
** function that puts every letter of every word in it in lowercase
*/

char *my_strlowcase(char *str)
{
    int count = 0;
    char aux = ' ';

    while (str[count] != '\0') {
        if ((str[count] > 64) && (str[count] < 91)) {
            aux = str[count] + 32;
            str[count] = aux;
        }
        count++;
    }
    return (str);
}
