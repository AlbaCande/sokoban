/*
** EPITECH PROJECT, 2022
** my_swap.c
** File description:
** Write a function that swaps the content of two integers,
** whose addresses are given as a parameter
*/

void my_swap(int *a, int *b)
{
    int aux = 0;

    aux = *a;
    *a = *b;
    *b = aux;
}
