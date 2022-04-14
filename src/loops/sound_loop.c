/*
** EPITECH PROJECT, 2022
** My Defender
** File description:
** Sound loop
*/

#include "my_defender.h"

void sound_loop(my_defender_t *d)
{
    draw_background(d);
    draw_sound_sprite(d);
    sfRenderWindow_display(d->w.window);
    sound_events(d);
}
