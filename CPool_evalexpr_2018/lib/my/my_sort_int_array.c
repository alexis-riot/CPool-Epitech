/*
** EPITECH PROJECT, 2018
** my_sort_int_array
** File description:
** Sorts an integer array in ascending order
*/

#include "my.h"

void my_sort_int_array(int *tab, int size)
{
    int check_size = 0;
    int nb = 0;

    while (check_size < size) {
        nb = 0;

        while (nb < (size - 1)) {
            if (tab[nb] > tab[nb + 1]) {
                my_swap(&tab[nb], &tab[nb + 1]);
            }
            nb++;
        }
        check_size++;
    }
}
