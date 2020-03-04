/*
** EPITECH PROJECT, 2018my_revstr
** test_my_strupcase
** File description:
** Testing my_strupcase function of my lib
*/

#include <criterion/criterion.h>

char *my_strupcase(char *str);

Test(my_strupcase, test1)
{
    char dest[] = "Hello";

    cr_assert_str_eq(my_strupcase(dest), "HELLO");
}

Test(my_strupcase, test2)
{
    char dest[] = "Hello";

    my_strupcase(dest);
    cr_assert_str_eq(dest, "HELLO");
}
