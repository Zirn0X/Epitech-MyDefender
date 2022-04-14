/*
** EPITECH PROJECT, 2022
** My defender
** File description:
** Start Menu
*/

#include "my_defender.h"

void menu_loop(my_defender_t *d)
{
    for (int i = 0; i < 2; i++) {
        sfRenderWindow_drawSprite(d->w.window,
        d->s_m[i].sprite, NULL);
    }
    for (int i = 0; i < 3; i++) {
        sfRenderWindow_drawRectangleShape(d->w.window,
        d->r_s[i].rect_shape, NULL);
    }
    sfRenderWindow_display(d->w.window);
    main_window_events(d);
}
