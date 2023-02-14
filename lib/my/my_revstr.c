/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** Write a function that reverses a string
*/

int my_strlen(char const *str);

char *my_revstr(char *src)
{
    int length = my_strlen(src);
    int ini = 0;
    int fin = length - 1;
    char aux = ' ';

    while (fin > ini) {
        aux = src[ini];
        src[ini] = src[fin];
        src[fin] = aux;
        ini++;
        fin--;
    }
    return (src);
}
