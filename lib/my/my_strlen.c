/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** Write a function that counts and returns the number of characters
** found in the string passed as parameter.
*/

int my_strlen(char const *str)
{
    int count = 0;

    while (str[count]) {
        count++;
    }
    return (count);
}
