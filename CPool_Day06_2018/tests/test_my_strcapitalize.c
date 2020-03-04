/*
** EPITECH PROJECT, 2018
** test_my_strcapitalize
** File description:
** Testing my_strcapitalize function of my lib
*/

#include <criterion/criterion.h>

char *my_strcapitalize(char *str);

Test(my_strcapitalize, test1)
{
    char dest[] = "hello world";

    cr_assert_str_eq(my_strcapitalize(dest), "Hello World");
}

Test(my_strcapitalize, test2)
{
    char dest[] = "hello world";

    my_strcapitalize(dest);
    cr_assert_str_eq(dest, "Hello World");
}
