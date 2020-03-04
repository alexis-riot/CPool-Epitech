/*
** EPITECH PROJECT, 2018
** send_result @evalexpr
** File description:
** [enter description here]
*/

#include "my.h"
#include "bistro_matic.h"

int send_result(char **str)
{
    int number = check_expr(str);
    int next_number;
    char operator;

    while ((*str)[0] != '\0' && (*str)[0] != ')') {
        operator = (*str)[0];
        *str = *str + 1;

        if (operator == '-' || operator == '+')
            next_number = check_operator(str);
        else
            next_number = check_expr(str);

        number = do_op(number, operator, next_number);
    }
    return (number);
}
