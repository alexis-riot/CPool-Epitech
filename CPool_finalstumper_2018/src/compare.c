/*
** EPITECH PROJECT, 2018
** compare.c @finalstumper
** File description:
** Display the assignements of the read
*/

#include "my.h"
#include "rush3.h"

void compare_result(char *buff, int x, int y)
{
    if (x == 1 || y == 1)
        compare_one(buff, x, y);
    else
        compare_multiples(buff, x, y);
}

int compare_multiples(char *buff, int x, int y)
{
    if (buff[0] == 'o')
        display_result("rush1-1", x, y, 1);

    else if (buff[0] == '/')
        display_result("rush1-2", x, y, 1);

    else if (buff[0] == 'A' && buff[x - 1] == 'A')
        display_result("rush1-3", x, y, 1);

    else if (buff[0] == 'A' && buff[x - 1] == 'C') {
        if (getLast(buff) == 'C')
            display_result("rush1-4", x, y, 1);
        if (getLast(buff) == 'A')
            display_result("rush1-5", x, y, 1);
    }
    else
        my_putstr("none");
    return (0);
}

int compare_one(char *buff, int x, int y)
{
    if (buff[0] == 'o')
        display_result("rush1-1", x, y, 1);

    else if (buff[0] == '*')
        display_result("rush1-2", x, y, 1);

    else if (buff[0] == 'B') {
        display_result("rush1-3", x, y, 0);
        my_putstr(" || ");
        display_result("rush1-4", x, y, 0);
        my_putstr(" || ");
        display_result("rush1-5", x, y, 1);
    }
    else
        my_putstr("none");
    return (0);
}
