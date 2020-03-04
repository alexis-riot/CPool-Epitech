/*
** EPITECH PROJECT, 2018
** test_my_strncpy
** File description:
** Testing my_strncpy function of my lib
*/

#include <criterion/criterion.h>

char *my_strncpy(char *dest, char const *src, int n);

Test(my_strncpy, test1)
{
    char dest[] = {0};

    my_strncpy(dest, "HelloWorld", 5);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strncpy, test2)
{
    char dest[] = {0};

    my_strncpy(dest, "HelloWorld", 7);
    cr_assert_str_eq(dest, "HelloWo");
}


Test(my_strncpy, test3)
{
    char dest[] = {0};

    my_strncpy(dest, "HelloWorld#`’(", 17);
    cr_assert_str_eq(dest, "HelloWorld#`’(");
}
