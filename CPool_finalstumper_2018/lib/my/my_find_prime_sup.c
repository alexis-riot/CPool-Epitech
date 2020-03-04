/*
** EPITECH PROJECT, 2018
** my_find_prime_sup
** File description:
** Function that returns the smallest prime number that is greater than param
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    int result;

    for (int i = nb;; i++) {
        if (my_is_prime(i)) {
            result = i;
            break;
        }
    }
    return (result);
}
