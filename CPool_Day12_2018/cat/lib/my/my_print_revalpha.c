/*
** EPITECH PROJECT, 2018
** my_print_revalpha
** File description:
** Show the alphabet in descending order
*/

#include "my.h"

int my_print_revalpha(void)
{
    char c;

    for (c = 'z'; c != 'a' - 1; c--) {
        my_putchar(c);
    }
    return (1);
}
