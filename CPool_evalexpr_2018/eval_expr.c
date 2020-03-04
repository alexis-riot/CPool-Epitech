/*
** EPITECH PROJECT, 2018
** eval_expr
** File description:
** Project that evaluate a mathematical expression
*/

#include "my.h"
#include "eval_expr.h"


int main(int argc, char *argv[])
{
    if (argc != 2)
        return send_error("You must have 1 argument at least.\n");

    my_put_nbr(eval_expr(argv[1]));
    my_putchar('\n');
    return (0);
}

int eval_expr(char *str)
{
    char **new_str = &str;
    str = remove_space(str);
    return (send_result(new_str));
}
