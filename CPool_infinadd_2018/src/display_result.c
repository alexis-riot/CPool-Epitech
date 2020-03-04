/*
** EPITECH PROJECT, 2018
** display_result.c
** File description:
** Function displaying the result
*/

#include "../include/my.h"

void display_result(char *result, int next_add, int negative)
{
    if(negative)
        my_putchar('-');
    if(next_add > 0)
        my_putstr("1");

    my_putstr(result);
    my_putchar('\n');
}
