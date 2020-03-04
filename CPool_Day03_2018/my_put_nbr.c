/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** Function that display the number given as a parameter
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb < 0)
    {
        nb = -nb;
        my_putchar('-');
    }

    if(nb / 10 != 0)
        my_put_nbr(nb / 10);

    my_putchar((nb % 10) + '0');
}
