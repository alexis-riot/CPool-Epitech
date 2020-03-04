/*
** EPITECH PROJECT, 2018
** my_print_alpha
** File description:
** Show alphabet in lowcase
*/

#include "my.h"

int my_print_alpha(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++) {
        my_putchar(c);
    }
    return 1;
}
