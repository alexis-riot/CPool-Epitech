/*
** EPITECH PROJECT, 2018
** send_error.c
** File description:
** Function that send the error and return (84)
*/

#include "../include/my.h"

int send_error(char *c, int returncode)
{
    write(2, c, my_strlen(c));
    return (returncode);
}
