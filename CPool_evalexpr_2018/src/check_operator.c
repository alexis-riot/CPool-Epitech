/*
** EPITECH PROJECT, 2018
** check_operator @evalexpr
** File description:
** Function that check if it's last of expression and make an adequate oper.
*/

#include "my.h"
#include "eval_expr.h"

int check_operator(char **str)
{
    int number = check_expr(str);
    int next_number;
    char operator;

    while ((*str)[0] != '\0' && (*str)[0] != ')') {
        operator = (*str)[0];
        *str = *str + 1;
        next_number = check_expr(str);
        number = do_op(number, operator, next_number);
    }
    return (number);
}
