/*
** EPITECH PROJECT, 2018
** cat.c
** File description:
** Program which executes the same task as the system cat command
*/

#include "include/my.h"
#include <fcntl.h>

int cat_file(char *file)
{
    int fd = open(file, O_RDONLY);
    int size = 32;
    char str[32];

    if (fd != -1) {
        while (size == 32) {
            size = read(fd, str, 32);
            for (int i = 0; i < size; i++) {
                my_putchar(str[i]);
            }
        }
    }
    else
        return send_error("No such file or directory\n");

    close(fd);
    return (0);
}

int cat(void)
{
    int size;
    char str[32];

    for (;;) {
        size = read(0, str, 32);
        for (int i = 0; i < size; i++) {
            my_putchar(str[i]);
        }
    }
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            cat_file(argv[i]);
        }
    }
    else {
        cat();
    }
    return (0);
}

int send_error(char *c)
{
    write(2, c, my_strlen(c));
    return (84);
}
