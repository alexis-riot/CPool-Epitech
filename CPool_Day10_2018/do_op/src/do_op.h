/*
** EPITECH PROJECT, 2018
** do_op.h
** File description:
** Program that calculing
*/

#define DO_ADD (1)
#define DO_DIV (2)
#define DO_MOD (3)
#define DO_MUL (4)
#define DO_SUB (5)

int do_op(int argc, char *argv[]);
int calcul(char **argv);

int check_operator(char *operator);
int do_getnbr(char const *str);

int my_add(int value1, int value2);
int my_div(int value1, int value2);
int my_mod(int value1, int value2);
int my_mul(int value1, int value2);
int my_sub(int value1, int value2);
