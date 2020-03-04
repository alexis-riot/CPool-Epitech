/*
** EPITECH PROJECT, 2018
** task01.c
** File description:
** Displaying an image in a window (800x600)
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "include/my.h"

struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
};
typedef struct framebuffer framebuffer_t;

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t   *tab;

    tab = malloc(sizeof(framebuffer_t));
    tab->pixels = malloc(sizeof(sfUint8) * width * height * 4);

    if(tab == NULL)
        return (NULL);

    if(tab->pixels == NULL)  {
        free(tab);
        return (NULL);
    }
    tab->width = width;
    tab->height = height;

    for (int i = 0; i < width *height * 4; i++) {
        tab->pixels[i] = 0;
    }
    return (tab);
}

void framebuffer_destroy(framebuffer_t *frame)
{
    free(frame->pixels);
    free(frame);
}

void put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color)
{
    int test = framebuffer_create(x, y);
}



int main(void)
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window;
    sfEvent event;
    window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);

    if(!window)
        return (84);

    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if(event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
    }
    sfRenderWindow_destroy(window);

    return (0);
}
