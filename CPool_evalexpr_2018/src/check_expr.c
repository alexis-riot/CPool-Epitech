/*
** EPITECH PROJECT, 2018
** check_expr @evalexpr
** File description:
** Function that check the priority of an expression
*/

#include "my.h"
#include "eval_expr.h"

int check_expr(char **str)
{
	int	result = 0;
	int	operator = 1;

	if ((*str)[0] == '-' || (*str)[0] == '+') {
		if ((*str)[0] == '-')
			operator *= -1;
		*str = *str + 1;
	}
	if ((*str)[0] == '(') {
		*str = *str + 1;
		result = send_result(str);
		if ((*str)[0] == ')')
			*str = *str + 1;
		return (result);
	}
	while ((*str)[0] >= '0' && (*str)[0] <= '9') {
		result = result * 10 + (*str)[0] - '0';
		*str = *str + 1;
	}
	return (result * operator);
}
