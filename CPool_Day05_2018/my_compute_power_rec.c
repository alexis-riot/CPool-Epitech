/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Recursive function that returns the first argument raised to the power p
*/

int my_compute_power_rec(int nb, int p)
{
    int result = 1;

    if (p == 0)
        return (1);

    if (p < 0)
        return (0);

    result = (nb * my_compute_power_rec(nb, p - 1));

    return (result);
}
