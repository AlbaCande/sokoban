/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** Write a function that returns a number, sent to the function as a string
*/

int my_getnbr(char const *str)
{
    int ret = 0;
    int count = 0;
    int sign = 1;

    while (str[count] == '+' || str[count] == '-') {
        if (str[count] == '-')
            sign = sign * (-1);
        count++;
    }
    while (str[count] != '\0') {
        if (str[count] > 47 && str[count] < 58) {
            ret = ret * 10;
            ret = ret + str[count] - 48;
            count++;
        } else {
            return (ret * sign);
        }
    }
    return (ret * sign);
}
