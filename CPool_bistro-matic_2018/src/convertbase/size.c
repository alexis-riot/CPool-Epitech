/*
** EPITECH PROJECT, 2018
** size.c @bistro-matic
** File description:
** [enter description here]
*/

#include "my.h"
#include "bistro_matic.h"

int size_2str(char **src, char **argv)
{
    int a = 0;
    int i = 0;
    int b = 0;

    while (a < size_str(argv)) {
        b = 0;
        while (src[a][b] != '\0') {
            i++;
            b++;
        }
        a++;
    }
    return (i);
}

int size_2str_res(int nb, int len_b)
{
    int a = 0;
    while (nb > 0) {
        a++;
        nb = nb / len_b;
    }
    return (a);
}

int size_nbr(int nb)
{
    int a = 1;

    while (nb > 10) {
        nb = nb /10;
        a++;
    }
    return (a);
}

int size_str(char **argv)
{
    int i = 0;
    int size = 0;

    while (argv[1][i] != '\0') {
        if (carac_c(argv, i) == 1) {
            i++;
            size++;
        }
        if (carac_nbr(argv, i) == 1) {
            while (carac_nbr(argv, i) == 1)
                i++;
            size++;
        }
    }
    return (size);
}
