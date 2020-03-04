/*
** EPITECH PROJECT, 2018
** my_print_digits
** File description:
** Show all numbers in ascending order
*/

void my_putchar(char c);

int my_print_digits(void)
{
    char c;
    for(c = '0'; c != '9' + 1; c++)
    {
        my_putchar(c);
    }
    return 1;
}
