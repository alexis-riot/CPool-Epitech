/*
** EPITECH PROJECT, 2018
** check_sign.c
** File description:
** Check sign of operation and determine if the result is positive or negative
*/

#include "../include/my.h"

#define OP_ADD  (1)
#define OP_LESS (2)

void check_sign(char *a, char *b)
{
    int operation;
    int negative;
    if(a[0] == '-' || b[0] == '-') {
        if (a[0] == '-' && b[0] == '-') {
            negative = 1;
            operation = OP_ADD;
        }
        else {
            if(a[0] == '-' && (my_strlen(a) > my_strlen(b))) {
                negative = 1;
                operation = OP_LESS;
            }
            else if (b[0] == '-' && (my_strlen(b) > my_strlen(a))) {
                negative = 1;
                operation = OP_LESS;
            }
            else {
                negative = 0;
                operation = OP_LESS;
            }
        }
    }
    else {
        negative = 0;
        operation = OP_ADD;
    }
    send_calcul(a, b, negative, operation);
}
