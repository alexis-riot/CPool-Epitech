/*
** EPITECH PROJECT, 2018
** add.c
** File description:
** Add 2 char who contains numbers
*/

#include "../include/my.h"

void add(char *a, char *b, int negative)
{
    char *result = malloc(my_strlen(a) + my_strlen(b) + 1);
    int difference;
    int next_add = 0;
    int last_next_add = 0;

    difference = (my_strlen(a) - my_strlen(b));
    for (int i = my_strlen(a) - 1; a[i] != 0; i--) {
        if ((i - difference) >= 0) {
            last_next_add = 0;
            next_add = (result[i] == '+' ? 1 : 0);
            result[i] = a[i] + (b[i - difference] - '0') + next_add;
            if (result[i] > '9') {
                result[i] = (((a[i] - '0') + (b[i - difference] - '0')) - 10) + '0' + next_add;
                result[i - 1] = '+';
                last_next_add = 1;
            }
        }
        else {
            last_next_add = 0;
            next_add = (result[i] == '+' ? 1 : 0);
            result[i] = a[i] + next_add;

            if (result[i] > '9') {
                result[i] = (((a[i] - '0') + 0) - 10) + '0' + next_add;
                result[i - 1] = '+';
                last_next_add = 1;
            }
        }
    }
    display_result(result, last_next_add, negative);
}
