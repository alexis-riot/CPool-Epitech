/*
** EPITECH PROJECT, 2018
** tab.c @bistro-matic
** File description:
** [enter description here]
*/

#include "my.h"
#include "bistro_matic.h"

char **tab_str(char **argv)
{
    int i = 0;
    int a = 0;
    int b = 0;
    char **str = malloc(sizeof(char *) * size_str(argv));
    while (argv[1][i] != '\0') {
        b = 0;
        if (carac_c(argv, i) == 1) {
            str[a] = malloc(sizeof(char) * 1);
            str[a][b] = argv[1][i];
        } else if (carac_nbr(argv, i) == 1) {
            str[a] = malloc(sizeof(char) * nbr_carac_nbr(argv, i));
            while (carac_nbr(argv, i) == 1) {
                str[a][b++] = argv[1][i++];
            }
            i--;
        }
        i++;
        a++;
    }
    return (str);
}
