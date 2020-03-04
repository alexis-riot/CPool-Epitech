/*
** EPITECH PROJECT, 2018
** do_getnumber.c @do-op.c
** File description:
** Get first number
*/

#include "../../include/my.h"

int do_getnbr(char const *str)
{
    long nb = 0;
    int specialchar = 1;

    if (my_strlen(str) > 12)
        return (0);

    for (int i = 0; str[i]; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            if (str[i - 1] == '-')
                specialchar = -1;
            if (str[i] >= '0' && str[i] <= '9')
                nb = ((nb * 10) + (str[i] - '0'));
            if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
                return (is_valid_int(nb * specialchar));
        }
        else if (str[i] != '-' && str[i] != '+' && str[i] != '*')
            break;
    }
    return (is_valid_int(nb * specialchar));
}
