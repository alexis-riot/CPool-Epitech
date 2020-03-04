/*
** EPITECH PROJECT, 2018
** my_compute_factorial_rec
** File description:
** Recursive function that returns the factorial of the nubmer given as params
*/

int my_compute_factorial_rec(int nb)
{
    int result = 1;

    if (nb == 0 || nb == 1)
        return (1);

    if (nb < 0)
        return (0);

    if (nb > 12)
        return (0);

    result = (nb * my_compute_factorial_rec(nb - 1));

    return (result);
}
