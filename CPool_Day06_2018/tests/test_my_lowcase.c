/*
** EPITECH PROJECT, 2018
** test_my_lowcase
** File description:
** Testing my_lowcase function of my lib
*/

#include <criterion/criterion.h>

char *my_strlowcase(char *str);

Test(my_strlowcase, test1)
{
    char dest[] = "HELLO";

    cr_assert_str_eq(my_strlowcase(dest), "hello");
}

Test(my_strlowcase, test2)
{
    char dest[] = "HELLO";

    my_strlowcase(dest);
    cr_assert_str_eq(dest, "hello");
}
