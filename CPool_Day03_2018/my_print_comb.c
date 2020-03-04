/*
** EPITECH PROJECT, 2018
** my_print_comb
** File description:
** Display numbers composed by three different digits numbers
*/

void my_putchar(char c);

int my_print_comb_test(int number1, int number2, int number3)
{
    if(number1 < number2 && number2 < number3)
    {
        if(number1 == '7' && number2 == '8' && number3 == '9')
        {
            my_putchar(number1);
            my_putchar(number2);
            my_putchar(number3);
        }
        else
        {
            my_putchar(number1);
            my_putchar(number2);
            my_putchar(number3);
            my_putchar(',');
            my_putchar(' ');
        }
    }
    return 1;
}

int my_print_comb(void)
{
    char number1;
    char number2;
    char number3;
    number1 = '0';
    number2 = '1';
    number3 = '2';
    while(number1 <= '7') {
        while(number2 <= '8') {
            while(number3 <= '9') {
                my_print_comb_test(number1, number2, number3);
                number3++;
            }
            number2++;
            number3 = 0;
        }
        number1++;
        number2 = 0;
    }
    return 1;
}
