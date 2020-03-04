/*
** EPITECH PROJECT, 2018
** my_params_to_array
** File description:
** Function that stores the program's parameters into array of structure
*/

#include "include/my.h"

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param **table;
    int i = 0;
    table = malloc(sizeof(struct info_param*) + 1);

    if(!table)
        return (0);

    while (i < ac) {
        table[i] = malloc(sizeof(struct info_param));
        table[i]->str = av[i];
        table[i]->length = my_strlen(av[i]);
        table[i]->copy = my_strdup(av[i]);
        table[i]->word_array = my_str_to_word_array(av[i]);
    }
    table[i] = NULL;
    return (*table);
}
