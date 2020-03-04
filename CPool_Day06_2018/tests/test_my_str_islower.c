/*
** EPITECH PROJECT, 2018
** test_my_str_islower
** File description:
** Testing my_str_islower function of my lib
*/

#include <criterion/criterion.h>

int my_str_islower(char const *str);

Test(my_str_islower, test1)
{
    char dest[] = "abcedfghijklmnopqsrtuvwxyzABCDEFGHIJKLMNOPQSRTUVWXYZ";

    cr_assert_eq(my_str_islower(dest), 0);
}

Test(my_str_islower, test2)
{
    char dest[] = "abcedfghijklmnopqsrtuvwxyz";

    cr_assert_eq(my_str_islower(dest), 1);
}
