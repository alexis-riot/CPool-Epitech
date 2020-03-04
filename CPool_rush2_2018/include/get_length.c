/*
** EPITECH PROJECT, 2018
** get_length
** File description:
** Count characters
*/

int get_length(char *c)
{
    int count = 0;

    for (int i = 0; i < my_strlen(c); i++) {
        if ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z'))
            count++;
    }
    return (count);
}
