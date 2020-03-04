/*
** EPITECH PROJECT, 2018
** my_str_isprintable
** File description:
** Function that return 1 if the parameter only contains printable characters.
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (!(str[i] >= 32 && str[i] <= 126))
            return (0);
        i++;
    }
    return (1);
}
