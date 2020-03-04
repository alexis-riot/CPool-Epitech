/*
** EPITECH PROJECT, 2018
** test_my_str_isalpha
** File description:
** Testing my_str_isalpha function of my lib
*/

#include <criterion/criterion.h>

int my_str_isalpha(char const *str);

Test(my_str_isalpha, test1)
{
    char dest[] = "Hello World";

    cr_assert_eq(my_str_isalpha(dest), 0);
}

Test(my_str_isalpha, test2)
{
    char dest[] = "HelloWorld";

    cr_assert_eq(my_str_isalpha(dest), 1);
}
