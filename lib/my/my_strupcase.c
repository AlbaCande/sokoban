/*
** EPITECH PROJECT, 2022
** my_strupcase.c
** File description:
** function that puts every letter of every word in it in uppercase.
*/

char *my_strupcase(char *str)
{
    int count = 0;
    char aux = ' ';

    while (str[count] != '\0') {
        if ((str[count] > 96) && (str[count] < 123)) {
            aux = str[count] - 32;
            str[count] = aux;
        }
        count++;
    }
    return (str);
}
