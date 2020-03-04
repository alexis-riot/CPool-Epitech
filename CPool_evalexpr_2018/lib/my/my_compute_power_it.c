/*
** EPITECH PROJECT, 2018
** my_compute_power_it
** File description:
** Iterative function that returns the first argument raised to the power p.
*/

#include "my.h"

int my_compute_power_it(int nb, int p)
{
    int result = 1;

    if (p == 0)
        return (1);

    if (p < 0)
        return (0);

    while (p >= 1) {
        result *= nb;
        p--;
    }
    return (result);
}
