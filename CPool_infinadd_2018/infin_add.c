/*
** EPITECH PROJECT, 2018
** infinadd.c
** File description:
** Program that performs an infinite addition
*/

#include "include/my.h"

void add(char *a, char *b, int negative);
void check_sign(char *a, char *b);
void display_result(char *result, int next_add, int negative);
void less(char *a, char *b, int negative);
char *remove_spchar(char *src);
void send_calcul(char *a, char *b, int negative, int type);
int send_error(char *c);

int main(int argc, char *argv[])
{
    if(argc != 3)
        return send_error("You must have 2 arguments.\n");

    check_sign(argv[1], argv[2]);
    return (0);
}
