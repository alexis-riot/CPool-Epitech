/*
** EPITECH PROJECT, 2018
** eval_expr
** File description:
** Prototypes of all functions in the program eval_expr
*/

#ifndef BUFF_SIZE
    #define BUFF_SIZE (4096)
#endif

int rush3(char *buff);
int send_error(char *c, int returncode);
void compare_result(char *str, int x, int y);
void display_result(char *str, int x, int y, int backn);
int compare_multiples (char *buff, int x, int y);
int compare_one(char *buff, int x, int y);
int getLast(char *str);
