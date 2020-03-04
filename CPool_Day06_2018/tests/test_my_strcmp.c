/*
** EPITECH PROJECT, 2018
** test_my_strcmp
** File description:
** Testing my_strcmp function of my lib
*/

#include <criterion/criterion.h>

int my_strcmp(const char *s1, const char *s2);

Test(my_strcmp, test1)
{
    char dest[] = "Salut comment tu vas ?";
    char src[] = "Salut comment tu vas ?";
    int a = my_strcmp(dest, src);

    cr_assert_eq(a, 0);
}

Test(my_strcmp, test2)
{
    char dest[] = "Salut Henry, comment tu vas ?";
    char src[] = "Salut comment tu vas ?";
    int a = my_strcmp(dest, src);

    cr_assert_eq(a, -1);
}

Test(my_strcmp, test3)
{
    char dest[] = "Salut comment tu vas ?";
    char src[] = "Salut Henry, comment tu vas ?";
    int a = my_strcmp(dest, src);

    cr_assert_eq(a, 1);
}
