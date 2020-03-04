/*
** EPITECH PROJECT, 2018
** rush3.c @finalstumper
** File description:
** Display the assignements of the read
*/

#include "my.h"
#include "rush3.h"

int rush3(char *buff)
{
    int x = 0;
    int y = 0;
    int count_long = 0;
    for (int i = 0; buff[i] != '\0'; i++) {
        if (i >= BUFF_SIZE)
            return my_putstr("none\n");

        if (buff[i] == '\n') {
            count_long = 1;
            y++;
        }
        if (count_long == 0)
            x++;
    }
    if (x == 0 || y == 0)
        return my_putstr("none\n");

    compare_result(buff, x, y);
    return (0);
}

void display_result(char *str, int x, int y, int backn)
{
    my_putchar('[');
    my_putstr(str);
    my_putchar(']');
    my_putchar(' ');
    my_put_nbr(x);
    my_putchar(' ');
    my_put_nbr(y);

    if (backn == 1)
        my_putchar('\n');
}

int getLast(char *str)
{
    for (int i = my_strlen(str); i >= 0; i--) {
        if (str[i] == 'A')
            return (str[i]);
        if (str[i] == 'C')
            return (str[i]);
        if (str[i] == '/')
            return (str[i]);
        if (str[i] == 'o')
            return (str[i]);
    }
    return (0);
}
