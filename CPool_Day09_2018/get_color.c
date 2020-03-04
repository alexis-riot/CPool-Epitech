/*
** EPITECH PROJECT, 2018
** get_color
** File description:
** Function that returns the color as an int by handling its three RGB compon.
*/

#include "include/my.h"

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    return ((red << 16) | (green << 8) | blue);
}
