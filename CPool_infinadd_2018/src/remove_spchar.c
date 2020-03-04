/*
** EPITECH PROJECT, 2018
** remove_spchar.c
** File description:
** Remove minus and add sign
*/

#include "../include/my.h"

char *remove_spchar(char *src)
{
    int tmp = 0;
    char *new_src = malloc(sizeof(char) * my_strlen(src) + 1);

    for (int i = 0; i < my_strlen(src); i++) {
        if (src[i] == '-' || src[i] == '+')
            continue;

        new_src[tmp] = src[i];
        tmp++;
    }
    return (new_src);
}
