/*
** EPITECH PROJECT, 2018
** do_op @evalexpr
** File description:
** Execute a simple operation with 3 parameters.
*/

#include "my.h"
#include "eval_expr.h"

int do_op(int number, char operator, int next_number)
{
    switch (operator) {
    case ('+'):
        return (number + next_number);
    case ('-'):
        return (number - next_number);
    case ('/'):
        return (number / next_number);
    case ('*'):
        return (number * next_number);
    case ('%'):
        return (number % next_number);
    }
    return (0);
}
