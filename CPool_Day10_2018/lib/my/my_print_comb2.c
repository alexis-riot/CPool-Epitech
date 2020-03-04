/*
** EPITECH PROJECT, 2018
** my_print_comb2
** File description:
** Display in ascending order all different combinaison of two two-digit numbers
*/

#include "my.h"

void my_print_gener(char num1, char num2, char num3)
{
    char num4;
    num4 = '0';
    while (num3 < '9' + 1) {
        num4 = num1 + 1;
        while (num4 < '9' + 1) {
            my_putchar(num1);
            my_putchar(num2);
            my_putchar(' ');
            my_putchar(num3);
            my_putchar(num4);
            if (!(num1 == '9' && num2 == '8' && num3 == '9' && num4 == '9')) {
                my_putchar(',');
                my_putchar(' ');
            }
            num4++;
        }
        num3++;
    }
}

int my_print_comb2(void)
{
    char num1;
    char num2;
    char num3;

    num1 = '0';
    num2 = '0';
    num3 = '0';

    while (num1 < '9' + 1) {
        while (num2 < '9' + 1) {
            my_print_gener(num1, num2, num3);
            num2++;
        }
        num1++;
        num2 = '0';
    }
    return (1);
}
