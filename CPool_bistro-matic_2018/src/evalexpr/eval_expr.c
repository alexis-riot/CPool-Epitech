/*
** EPITECH PROJECT, 2018
** eval_expr.c
** File description:
** Main of the program eval_expr
*/

#include "my.h"
#include "bistro_matic.h"

void eval_expr(char *str, char *operators, char *expr)
{
    char **formatted = format_expr(expr, str, operators);
    char *result;
    char **new_str;

    expr = remove_badchar(expr);
    result = convert_2str_str(formatted);
    new_str = &result;
    result = remove_space(result);

    convert_result(str, operators, send_result(new_str));
}

char *remove_badchar(char *str)
{
    char str_length = my_strlen(str);
    char *new_str = malloc(sizeof(char *) * str_length + 1);
    int tmp = 0;

    for (int i = 0; i < str_length; i++) {
        if (str[i] == 10)
            continue;

        new_str[tmp] = str[i];
        tmp++;
    }
    new_str[tmp] = '\0';
    return (new_str);
}

char **format_expr(char *expr, char *str, char *operators)
{
    char **send_result = malloc(sizeof(char *) * 100);

    send_result[0] = NULL;
    send_result[1] = expr;
    send_result[2] = str;
    send_result[3] = operators;

    return (send_result);
}
