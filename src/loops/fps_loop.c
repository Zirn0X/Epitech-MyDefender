/*
** EPITECH PROJECT, 2022
** My Denfender
** File description:
** Fps Loop
*/

#include "my_defender.h"

void fps_loop(my_defender_t *d)
{
    draw_background(d);
    for (int i = 5; i < 10; i++) {
        sfRenderWindow_drawRectangleShape(d->w.window,
        d->r_s[i].rect_shape, NULL);
    }
    sfRenderWindow_display(d->w.window);
    fps_events(d);
}
