/*
** EPITECH PROJECT, 2018
** test_my_strstr
** File description:
** Testing my_strstr function of my lib
*/


#include <criterion/criterion.h>

int compare(const char *str, const char *to_find);
char *my_strstr(char *str, char const *to_find);

Test(my_strstr, test1)
{
    char dest[] = "Salut comment tu vas ?";
    char src[] = "comment";

    my_strstr(dest, src);
    cr_assert_str_eq(src, "comment");
}

Test(my_strstr, test2)
{
    char dest[] = "Jerome";
    char src[] = "Yves";

    cr_assert_eq(my_strstr(dest, src), 0);
}

Test(my_strstr, test3)
{
    char dest[] = "";
    char src[] = "";

    my_strstr(dest, src);
    cr_assert_str_eq(src, "");
}
