/*
** EPITECH PROJECT, 2018
** my_compute_factorial
** File description:
** Iterative function that returns the factorial of the number given as params
*/

#include "my.h"

int my_compute_factorial_it(int nb)
{
    int result = 1;

    if (nb == 0 || nb == 1)
        return (1);

    if (nb < 0)
        return (0);

    if (nb > 12)
        return (0);

    while (nb > 1) {
        result *= nb;
        nb--;
    }

    return (result);
}
