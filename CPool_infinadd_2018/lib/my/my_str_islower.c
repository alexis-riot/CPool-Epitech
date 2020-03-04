/*
** EPITECH PROJECT, 2018
** my_str_islower
** File description:
** Function that returns 1 if the parameter only contains lowercase alphabet
*/

#include "my.h"

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
            return (0);
        i++;
    }
    return (1);
}
