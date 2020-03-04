/*
** EPITECH PROJECT, 2018
** test_my_revstr
** File description:
** Testing my_revstr function of my lib
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);
char *my_strcpy(char *dest, char const *src);

Test(my_revstr, test1)
{
    char dest[] = {0};

    my_strcpy(dest, "HelloWorld");
    cr_assert_str_eq(my_revstr(dest), "dlroWolleH");
}
