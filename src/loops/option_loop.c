/*
** EPITECH PROJECT, 2022
** My defender
** File description:
** Option loop
*/

#include "my_defender.h"

void option_loop(my_defender_t *d)
{
    draw_background(d);
    for (int i = 3; i < 6; i++) {
        sfRenderWindow_drawRectangleShape(d->w.window,
        d->r_s[i].rect_shape, NULL);
    }
    sfRenderWindow_display(d->w.window);
    option_events(d);
}
