/*
** EPITECH PROJECT, 2018
** rush1_2
** File description:
** Display a square with X and Y params
*/


void my_putchar(char c);
int my_putstr(char const * str);

int my_puterror(char const * str)
{
    int i = 0;

    while (str[i])
    {
        write(2, &str[i], 1);
        i++;
    }
    return 1;
}

void rush(int x, int y)
{
    if(x <= 0 || y <= 0) {
        my_puterror("Invalid size\n");
        return;
    }

    create_first_line(x, y);
    create_content(x, y);
    create_last_line(x, y);
}

void create_first_line(int x, int y)
{
    if (y <= 1)
        return;

    if (x > 1)
        my_putchar('A');
    else
        my_putchar('B');

    for (int i = 1; i < x - 1; i++) {
        my_putchar('B');
    }
    if (x > 1)
        my_putchar('A');

    my_putchar('\n');
}

void create_content(int x, int y)
{
    for (int ii = 0; ii < y - 2; ii++) {
        my_putchar('B');

        for (int i = 1; i < x - 1; i++) {
            my_putchar(' ');
        }
        if(x > 1)
            my_putchar('B');

        my_putchar('\n');
    }
}

void create_last_line(int x, int y)
{
    if (y > 1 && x > 1)
        my_putchar('C');
    else
        my_putchar('B');

    for (int i = 1; i < x - 1; i++) {
        my_putchar('B');
    }
    if (x > 1) {
        if(y > 1)
            my_putchar('C');
        else
            my_putchar('B');
    }

    my_putchar('\n');
}
