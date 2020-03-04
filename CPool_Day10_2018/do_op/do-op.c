/*
** EPITECH PROJECT, 2018
** do-op.c
** File description:
** Program called do-op that computes an operation.
*/

#include "../include/my.h"
#include "src/do_op.h"

int main(int argc, char *argv[])
{
    int type_operator;

    if (argc != 4)
        return (84);

    type_operator = check_operator(argv[2]);

    if (type_operator == 0) {
        my_putstr("0\n");
        return (84);
    }
    if (type_operator == DO_MOD && do_getnbr(argv[3]) == 0) {
        my_putstr("Stop: modulo by zero\n");
        return (84);
    }
    if (type_operator == DO_DIV && do_getnbr(argv[3]) == 0) {
        my_putstr("Stop: division by zero\n");
        return (84);
    }
    do_op(argc, argv);
    return (0);
}

int do_op(int argc, char *argv[])
{
    int result = calcul(argv);

    my_put_nbr(result);
    my_putchar('\n');
    return (0);
}

int calcul(char **argv)
{
    int result = 0;
    int get_operator = check_operator(argv[2]);

    if (get_operator == DO_ADD)
        result = my_add(do_getnbr(argv[1]), do_getnbr(argv[3]));

    else if (get_operator == DO_DIV)
        result = my_div(do_getnbr(argv[1]), do_getnbr(argv[3]));

    else if (get_operator == DO_MOD)
        result = my_mod(do_getnbr(argv[1]), do_getnbr(argv[3]));

    else if (get_operator == DO_MUL)
        result = my_mul(do_getnbr(argv[1]), do_getnbr(argv[3]));

    else if (get_operator == DO_SUB)
        result = my_sub(do_getnbr(argv[1]), do_getnbr(argv[3]));

    return (result);
}

int check_operator(char *operator)
{
    if (operator[0] == '+')
        return (DO_ADD);

    if (operator[0] == '/')
        return (DO_DIV);

    if (operator[0] == '%')
        return (DO_MOD);

    if (operator[0] == '*')
        return (DO_MUL);

    if (operator[0] == '-')
        return (DO_SUB);

    return (0);
}
