/*
** EPITECH PROJECT, 2018
** convert.c @bistro-matic
** File description:
** [enter description here]
*/

#include "my.h"
#include "bistro_matic.h"

char *convert_2str_str(char **argv)
{
    int a = 0;
    int b = 0;
    int i = 0;
    char **src = convert_carac(argv);
    char *str;

    str = malloc(sizeof(char) * size_2str(src, argv));
    while (a < size_str(argv)) {
        b = 0;
        while (src[a][b] != '\0') {
            str[i] = src[a][b];
            i++;
            b++;
        }
        a++;
    }
    return (str);
}

char *convert_nbr(char *str, int nb, int i)
{
    int modulo = 0;

    if (nb < 0)
        nb = nb * -1;
    else if (nb < 10) {
        str[i] = nb + '0';
        return (str);
    }
    if (nb >= 10) {
        modulo = nb % 10;
        str[i] = modulo + '0';
        i++;
        convert_nbr(str, nb / 10, i);
    }
    return (str);
}

char *convert_nbr_res(int nb)
{
    int i = 0;
    char *str = malloc(sizeof(char) * size_nbr(nb));

    return (my_revstr(convert_nbr(str, nb, i)));
}

char **convert_carac(char **argv)
{
    int d = size_str(argv);
    char **src = tab_str(argv);
    int a = 0;
    int b = 0;
    int result = 0;
    char **str = malloc(sizeof(char *) * d);
    while (a < size_str(argv)) {
        b = 0;
        if (carac_c_src(src[a], argv) == 1) {
            str[a] = malloc(sizeof(char) * 1);
            str[a][b] = carac_conv(src[a], argv);
            a++;
        } else {
            b = 0;
            result = calcul(argv, src[a], b, my_strlen(src[a]));
            str[a] = malloc(sizeof(char *) * size_nbr(result));
            while (b < size_nbr(result)) {
                str[a][b] = convert_nbr_res(result)[b];
                b++;
            }
            a++;
        }
    }
    return (str);
}

void convert_result(char *base, char *operateur, int nb)
{
    int result = 0;
    int len_b = my_strlen(base);
    int *nbr;
    int a = 0;

    if (nb >= 0) {
        nbr = malloc(sizeof(int) * size_2str_res(nb, len_b) - 1);
        while (nb > 0) {
            result = nb % len_b;
            nbr[a] = result;
            nb = nb / len_b;
            a++;
        }
        a--;
        while (a >= 0) {
            my_putchar(base[nbr[a]]);
            a--;
        }
    } else {
        my_putchar(operateur[3]);
        nb *= -1;
        nbr = malloc(sizeof(int) * size_2str_res(nb, len_b) - 1);
        while (nb > 0) {
            result = nb % len_b;
            nbr[a] = result;
            nb = nb / len_b;
            a++;
        }
        a--;
        while (a >= 0) {
            my_putchar(base[nbr[a]]);
            a--;
        }
    }
}
