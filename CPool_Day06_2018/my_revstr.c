/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** Function that reverses a string
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i])
        i++;

    return i;
}

char *my_evil_str(char *str)
{
    int tmp;
    int size = my_strlen(str);

    for (int i = 0; i < size / 2; i++)
    {
        tmp = str[i];

        str[i] = str[(size - 1) - i];
        str[(size - 1) - i] = tmp;
    }
    return (str);
}

char *my_revstr(char *str)
{
    return (my_evil_str(str));
}
