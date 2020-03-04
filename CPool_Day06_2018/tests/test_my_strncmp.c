/*
** EPITECH PROJECT, 2018
** test_my_strncmp
** File description:
** Testing my_strncmp function of my lib
*/

#include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, int n);

Test(my_strncmp, test1)
{
    char dest[] = "Salut comment tu vas ?";
    char src[] = "Salut comment tu vas ?";
    int a = my_strncmp(dest, src, 5);

    cr_assert_eq(a, 0);
}

Test(my_strncmp, test2)
{
    char dest[] = "Salut Henry, comment tu vas ?";
    char src[] = "Salut comment tu vas ?";
    int a = my_strncmp(dest, src, 20);
    cr_assert_eq((a < 0) ? -1 : a, -1);
}

Test(my_strncmp, test3)
{
    char dest[] = "Salut comment tu vas ?";
    char src[] = "Salut Henry, comment tu vas ?";
    int a = my_strncmp(dest, src, 20);

    cr_assert_eq((a > 0) ? 1 : a, 1);
}


Test(my_strncmp, test4)
{
    char *dest = "";
    char *src = "";
    int a = my_strncmp(dest, src, 20);

    cr_assert(1);
}
