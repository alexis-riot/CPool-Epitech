/*
** EPITECH PROJECT, 2018
** my_list_size
** File description:
** Function that returns the number of elements on the list
*/

#include "include/my.h"
#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int count = 0;
    linked_list_t *list = begin;

    while (list != NULL) {
        count++;
        list = list->next;
    }
    return (count);
}
