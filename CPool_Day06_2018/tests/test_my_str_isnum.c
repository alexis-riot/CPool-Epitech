/*
** EPITECH PROJECT, 2018
** test_my_str_isnum
** File description:
** Testing my_str_isnum function of my lib
*/

#include <criterion/criterion.h>

int my_str_isnum(char const *str);

Test(my_str_isnum, test1)
{
    char dest[] = "0123456789A";

    cr_assert_eq(my_str_isnum(dest), 0);
}

Test(my_str_isnum, test2)
{
    char dest[] = "0123456789";

    cr_assert_eq(my_str_isnum(dest), 1);
}
