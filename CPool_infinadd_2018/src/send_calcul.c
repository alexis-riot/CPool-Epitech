/*
** EPITECH PROJECT, 2018
** send_calcul.c
** File description:
** Sending the calcul to add() or less() function
*/

#include "../include/my.h"

#define OP_ADD  (1)
#define OP_LESS (2)

void send_calcul(char *a, char *b, int negative, int type)
{
    if(a[0] == '-')
        a = remove_spchar(a);
    if(b[0] == '-')
        b = remove_spchar(b);

    if (type == OP_ADD) {
        if (my_strlen(a) > my_strlen(b))
            add(a, b, negative);

        else
            add(b, a, negative);
    }
    if (type == OP_LESS) {
        if (my_strlen(a) > my_strlen(b))
            less(a, b, negative);

        else
            less(b, a, negative);
    }
}
