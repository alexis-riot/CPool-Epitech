/*
** EPITECH PROJECT, 2018
** my_isneg
** File description:
** Show all numbers in ascending order
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if(n >= 0)
        my_putchar('P');

    else
        my_putchar('N');

    return 1;
}
