/*
** EPITECH PROJECT, 2018
** check_ops @bistro-matic
** File description:
** Check operators entred in parameters
*/

#include "my.h"
#include "bistro_matic.h"

void check_ops(char const *ops)
{
    if (my_strlen(ops) != 7) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
}
