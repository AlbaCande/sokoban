/*
** EPITECH PROJECT, 2022
** my_str_swap
** File description:
** swaping two chars in a string
*/

char *my_str_swap(char *str, int start, int end)
{
    char temp;
    int true = (start > end) ? 1 : 0;
    if (true == 0) {
        while (str[start] && str[start + 1] && start != end) {
            temp = str[start];
            str[start] = str[start + 1];
            str[start + 1] = temp;
            start++;
        }
    } else {
        while (str[start] && str[start - 1] && start != end) {
            temp = str[start];
            str[start] = str[start - 1];
            str[start - 1] = temp;
            start--;
        }
    }
    return (str);
}
