/*
** EPITECH PROJECT, 2018
** my_str_is_alpha
** File description:
** Function that return 1 if the string as parameter contains only alphabetical
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (!(str[i] >= 'A' && str[i] <= 'z'))
            return (0);
        i++;
    }
    return (1);
}
