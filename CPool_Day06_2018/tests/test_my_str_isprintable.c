/*
** EPITECH PROJECT, 2018
** test_my_str_isprintable
** File description:
** Testing my_str_isprintable function of my lib
*/

#include <criterion/criterion.h>

int my_str_isprintable(char const *str);

Test(my_str_isprintable, test1)
{
    char dest[] = "abcedfghijklmnopqsrtuvwxyz ABCDEFGHIJKLMNOPQSRTUVWXYZ 0123456789 ,?;.:/!";

    cr_assert_eq(my_str_isprintable(dest), 1);
}

Test(my_str_isprintable, test2)
{
    char dest[150];
    int tmp = 0;

    for (int i = 0; i < 127; i++) {
        dest[i] = i + 1;
        tmp++;
    }

    dest[tmp] = '\0';

    cr_assert_eq(my_str_isprintable(dest), 0);
}
