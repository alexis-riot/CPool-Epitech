/*
** EPITECH PROJECT, 2018
** my_rev_params
** File description:
** Display all arguments received by the command line in reverse order
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const str[])
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
    return (1);
}

int main(int argc, char **argv)
{
    for (int i = argc-1; i >= 0; i--) {
        my_putstr(argv[i]);
        my_putstr("\n");
    }
    return (0);
}
