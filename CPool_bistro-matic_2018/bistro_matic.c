/*
** EPITECH PROJECT, 2018
** bistro_matic.c
** File description:
** Program that evaluate an expression and calcul it with all bases and inf num
*/

#include "my.h"
#include "bistro_matic.h"

int main(int argc, char *argv[])
{
    unsigned int size;
    char *expr;

    if (argc != 4) {
        display_help();
        return (EXIT_USAGE);
    }
    if ((my_strcmp(argv[1], "-h") == 0) || my_strcmp(argv[1], "--help") == 0) {
        display_help();
        return (EXIT_USAGE);
    }

    size = my_getnbr(argv[3]);
    check_base(argv[1]);
    check_ops(argv[2]);
    expr = get_expr(size);
    eval_expr(argv[1], argv[2], expr);
    my_putchar('\n');
    return (EXIT_SUCCESS);
}
