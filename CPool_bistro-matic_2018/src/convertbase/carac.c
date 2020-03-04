/*
** EPITECH PROJECT, 2018
** carac.c @bistro-matic
** File description:
** [enter description here]
*/

#include "my.h"
#include "bistro_matic.h"

int carac_c(char **argv, int i)
{
    int a = 0;

    while ((argv[1][i] != argv[3][a]) && (argv[3][a] != '\0'))
        a++;
    if (argv[3][a] == '\0')
        return (0);
    return (1);
}

int carac_c_src(char *src, char **argv)
{
    int i = 0;
    int a = 0;

    while ((src[i] != argv[3][a]) && argv[3][a] != '\0')
        a++;
    if (argv[3][a] == '\0')
        return (0);
    return (1);
}

int carac_nbr(char **argv, int i)
{
    int a = 0;

    while ((argv[1][i] != argv[2][a]) && (argv[2][a] != '\0'))
        a++;
    if (argv[2][a] == '\0')
        return (0);
    return (1);
}

char carac_conv(char *src, char **argv)
{
    int b = 0;
    int i = 0;

    while (src[b] != argv[3][i])
        i++;
    if (i == 0)
        return ('(');
    if (i == 1)
        return (')');
    if (i == 2)
        return ('+');
    if (i == 3)
        return ('-');
    if (i == 4)
        return ('*');
    if (i == 5)
        return ('/');
    if (i == 6)
        return ('%');
    return (0);
}

int nbr_carac_nbr(char **argv, int i)
{
    int a = 0;
    int nbr_nbr = 0;

    while (carac_c(argv, i) != 1 && argv[1][i] != '\0') {
        while ((argv[1][i] != argv[2][a]) && (argv[2][a] != '\0'))
            a++;
        i++;
        nbr_nbr++;
    }
    return (nbr_nbr);
}
