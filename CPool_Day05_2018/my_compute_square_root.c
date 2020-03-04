/*
** EPITECH PROJECT, 2018
** my_compute_square_root
** File description:
** Function that returns the square root of the number given as argument
*/

int my_compute_square_root(int nb)
{
    int result = 0;

    while ((result * result) != nb)
    {
        if ((result * result) > nb)
            return (0);

        result++;
    }
    return (result);
}
