/*
** EPITECH PROJECT, 2018
** test_my_str_isupper
** File description:
** Testing my_str_isupper function of my lib
*/

#include <criterion/criterion.h>

int my_str_isupper(char const *str);

Test(my_str_isupper, test1)
{
    char dest[] = "abcedfghijklmnopqsrtuvwxyzABCDEFGHIJKLMNOPQSRTUVWXYZ";

    cr_assert_eq(my_str_isupper(dest), 0);
}

Test(my_str_isupper, test2)
{
    char dest[] = "ABCDEFGHIJKLMNOPQSRTUVWXYZ";

    cr_assert_eq(my_str_isupper(dest), 1);
}
