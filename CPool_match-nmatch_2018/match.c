/*
** EPITECH PROJECT, 2018
** match.c
** File description:
** Find out if two strings match with joker "*"
*/

int match(char const *s1, char const *s2)
{
    if(*s1 == '\0' && *s2 == '\0')
        return (1);

    if(*s1 == '\0')
        return ((*s2 == '*') ? match(s1, ++s2) : 0);




    return (-1);
}
