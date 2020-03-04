/*
** EPITECH PROJECT, 2018
** my_print_params
** File description:
** Display all arguments received by the command line
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
    for (int i = 0; i < argc; i++) {
        my_putstr(argv[i]);
        my_putstr("\n");

    }
    return (0);
}
