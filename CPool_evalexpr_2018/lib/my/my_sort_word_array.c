/*
** EPITECH PROJECT, 2018
** my_sort_word_array
** File description:
** Function that sorts the words received using ascii order
*/

#include "my.h"

int sizeof_2d(char **str)
{
    int count = 0;
    int i = 0;

    while(str[i] != NULL) {
        count ++;
        i++;
    }
    return (count);
}

int my_sort_word_array(char **tab)
{
    char *x;
    int count = sizeof_2d(tab);

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < i + 1; j++) {
            if ((char)(*tab[i]) < (char)(*tab[j])) {
                x = tab[j];
                tab[j] = tab[i];
                tab[i] = x;
            }
        }
    }
}
