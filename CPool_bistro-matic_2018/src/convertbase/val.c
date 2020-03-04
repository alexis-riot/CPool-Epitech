/*
** EPITECH PROJECT, 2018
** val @bistro-matic
** File description:
** [enter description here]
*/

int val_b(char **argv, char *src, int b)
{
    int i = 0;

    while (src[b] != argv[2][i])
        i++;
    return (i);
}
