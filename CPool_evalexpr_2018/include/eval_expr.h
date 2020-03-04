/*
** EPITECH PROJECT, 2018
** eval_expr
** File description:
** Prototypes of all functions in the program eval_expr
*/

int check_expr(char **str);
int eval_expr(char *str);
int send_result(char **str);
int do_op(int number, char operator, int next_number);
int check_operator(char **str);

char *remove_space(char *str);
int send_error(char *c);
