/*
** EPITECH PROJECT, 2018
** my_mod.c @do-op.c
** File description:
** Adding two parameters
*/

int my_mod(int value1, int value2)
{
    return ((value2 == 0) ? -1 : (value1 % value2));
}
