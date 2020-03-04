/*
** EPITECH PROJECT, 2018
** my_rev_list
** File description:
** Function that reverses the order of the list's elements
*/

#include "include/my.h"
#include "include/mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *actual = *begin;
    linked_list_t *prev = NULL;
    linked_list_t *next;

    while (actual != NULL) {
        next = actual->next;
        actual->next = prev;
        actual = next;
        prev = actual;
    }
    *begin = prev;
}
