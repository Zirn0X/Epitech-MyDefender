/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-mydefender-jeras.bertine
** File description:
** init_option
*/

#include "my_defender.h"

void init_sound(my_defender_t *d)
{
    d->r_s[3].tex = sfTexture_createFromFile("assets/sound.png", NULL);
    d->r_s[3].rect_shape = sfRectangleShape_create();
    d->r_s[3].pos = (sfVector2f) {250, 470};
    sfRectangleShape_setSize(d->r_s[3].rect_shape, (sfVector2f) {400, 175});
    sfRectangleShape_setPosition(d->r_s[3].rect_shape, d->r_s[3].pos);
    sfRectangleShape_setFillColor(d->r_s[3].rect_shape, sfRed);
    sfRectangleShape_setOutlineColor(d->r_s[3].rect_shape, sfYellow);
    sfRectangleShape_setTexture(d->r_s[3].rect_shape, d->r_s[3].tex, sfFalse);
}

void init_fps(my_defender_t *d)
{
    d->r_s[4].tex = sfTexture_createFromFile("assets/fps.png", NULL);
    d->r_s[4].rect_shape = sfRectangleShape_create();
    d->r_s[4].pos = (sfVector2f) {1200, 470};
    sfRectangleShape_setSize(d->r_s[4].rect_shape, (sfVector2f) {400, 175});
    sfRectangleShape_setPosition(d->r_s[4].rect_shape, d->r_s[4].pos);
    sfRectangleShape_setFillColor(d->r_s[4].rect_shape, sfRed);
    sfRectangleShape_setOutlineColor(d->r_s[4].rect_shape, sfYellow);
    sfRectangleShape_setTexture(d->r_s[4].rect_shape, d->r_s[4].tex, sfFalse);
}

void init_home(my_defender_t *d)
{
    d->r_s[5].tex = sfTexture_createFromFile("assets/home.png", NULL);
    d->r_s[5].rect_shape = sfRectangleShape_create();
    d->r_s[5].pos = (sfVector2f) {1750, 870};
    sfRectangleShape_setSize(d->r_s[5].rect_shape, (sfVector2f) {100, 100});
    sfRectangleShape_setPosition(d->r_s[5].rect_shape, d->r_s[5].pos);
    sfRectangleShape_setFillColor(d->r_s[5].rect_shape, sfRed);
    sfRectangleShape_setOutlineColor(d->r_s[5].rect_shape, sfYellow);
    sfRectangleShape_setTexture(d->r_s[5].rect_shape, d->r_s[5].tex, sfFalse);
}

void init_option_sprite(my_defender_t *d)
{
    init_sound(d);
    init_fps(d);
    init_home(d);
}
