/*
** EPITECH PROJECT, 2018
** calcul.c @bistro-matic
** File description:
** [enter description here]
*/

#include "my.h"
#include "bistro_matic.h"

int calcul(char **argv, char *src, int b, int n)
{
    int result = 0;

    n--;
    while (src[b] != '\0') {
        int comp_rec = my_compute_power_rec(my_strlen(argv[2]), n);
        result += val_b(argv, src, b) * comp_rec;
        b++;
        n--;
    }
    return (result);
}
