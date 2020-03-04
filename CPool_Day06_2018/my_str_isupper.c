/*
** EPITECH PROJECT, 2018
** my_str_isupper
** File description:
** Function that returns 1 if the parameter only contains uppercase alphabet
*/

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
            return (0);
        i++;
    }
    return (1);
}
