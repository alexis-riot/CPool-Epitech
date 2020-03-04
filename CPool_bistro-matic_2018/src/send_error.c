/*
** EPITECH PROJECT, 2018
** send_error.c
** File description:
** Function that send the error and return (84)
*/

#include "my.h"
#include "bistro_matic.h"

int send_error(char *c)
{
    write(2, c, my_strlen(c));
    return (84);
}
