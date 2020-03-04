/*
** EPITECH PROJECT, 2018
** my_show_param_array
** File description:
** Function that display the content of an array
*/

#include "include/my.h"

int my_show_param_array(struct info_param const *par)
{
    int i = 0;

    while (par[i].str) {
        my_put_nbr(par[i].length);
        my_putstr("\n");
        my_putstr(par[i].str);
        my_putstr("\n");
        my_putstr(par[i].copy);
        my_putstr("\n");
        my_show_word_array(par[i].word_array);
        my_putstr("\n");
        i++;
    }
    return (0);
}
