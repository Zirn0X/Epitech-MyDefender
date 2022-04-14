/*
** EPITECH PROJECT, 2022
** My Defender
** File description:
** Pause loop
*/

#include "my_defender.h"

void pause_loop(my_defender_t *d)
{
    draw_background(d);
    for (int i = 11; i < 13; i++) {
        sfRenderWindow_drawRectangleShape(d->w.window,
        d->r_s[i].rect_shape, NULL);
    }
    sfRenderWindow_display(d->w.window);
    pause_events(d);
}
