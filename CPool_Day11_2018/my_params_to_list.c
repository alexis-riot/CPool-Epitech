/*
** EPITECH PROJECT, 2018
** my_params_to_list
** File description:
** Function that creates a new list from the command line argument
*/

#include "include/my.h"
#include "include/mylist.h"

linked_list_t *insert_to_list(linked_list_t **list_struct, char *argv)
{
    linked_list_t *list_new;

    list_new = malloc(sizeof(linked_list_t));
    list_new->data = argv;
    list_new->next = list_struct;

    return (list_new);
}

linked_list_t *my_params_to_list(int ac, char * const * av)
{
    linked_list_t *list;

    list = NULL;

    for (int i = 0; i < ac; i++) {
        list = insert_to_list(list, av[i]);
    }
    return (list);
}
