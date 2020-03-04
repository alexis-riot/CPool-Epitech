/*
** EPITECH PROJECT, 2018
** check_base @bistro-matic
** File description:
** Check base entered in parameters
*/

#include "my.h"
#include "bistro_matic.h"

void check_base(char const *b)
{
    if (my_strlen(b) < 2) {
        my_putstr(SYNTAX_ERROR_MSG);
        my_putchar('\n');
        exit(EXIT_BASE);
    }
}
