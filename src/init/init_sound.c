/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-mydefender-jeras.bertine
** File description:
** init_sound
*/

#include "my_defender.h"

void init_mute(my_defender_t *d)
{
    d->r_s[10].tex = sfTexture_createFromFile("assets/mute.png", NULL);
    d->r_s[10].rect_shape = sfRectangleShape_create();
    d->r_s[10].pos = (sfVector2f) {870, 400};
    sfRectangleShape_setSize(d->r_s[10].rect_shape, (sfVector2f) {200, 200});
    sfRectangleShape_setPosition(d->r_s[10].rect_shape, d->r_s[10].pos);
    sfRectangleShape_setFillColor(d->r_s[10].rect_shape, sfRed);
    sfRectangleShape_setOutlineColor(d->r_s[10].rect_shape, sfYellow);
    sfRectangleShape_setTexture(d->r_s[10].rect_shape,
    d->r_s[10].tex, sfFalse);
}

void draw_sound_sprite(my_defender_t *d)
{
    sfRenderWindow_drawRectangleShape(d->w.window,
    d->r_s[5].rect_shape, NULL);
    sfRenderWindow_drawRectangleShape(d->w.window,
    d->r_s[9].rect_shape, NULL);
    sfRenderWindow_drawRectangleShape(d->w.window,
    d->r_s[10].rect_shape, NULL);
}

void init_sound_sprite(my_defender_t *d)
{
    init_mute(d);
}
