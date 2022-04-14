/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-mydefender-jeras.bertine
** File description:
** init_fps
*/

#include "my_defender.h"

void init_fps_one(my_defender_t *d)
{
    d->r_s[6].tex = sfTexture_createFromFile("assets/30.png", NULL);
    d->r_s[6].rect_shape = sfRectangleShape_create();
    d->r_s[6].pos = (sfVector2f) {100, 470};
    sfRectangleShape_setSize(d->r_s[6].rect_shape, (sfVector2f) {450, 175});
    sfRectangleShape_setPosition(d->r_s[6].rect_shape, d->r_s[6].pos);
    sfRectangleShape_setFillColor(d->r_s[6].rect_shape, sfRed);
    sfRectangleShape_setOutlineColor(d->r_s[6].rect_shape, sfYellow);
    sfRectangleShape_setTexture(d->r_s[6].rect_shape, d->r_s[6].tex, sfFalse);
}

void init_fps_two(my_defender_t *d)
{
    d->r_s[7].tex = sfTexture_createFromFile("assets/60.png", NULL);
    d->r_s[7].rect_shape = sfRectangleShape_create();
    d->r_s[7].pos = (sfVector2f) {750, 470};
    sfRectangleShape_setSize(d->r_s[7].rect_shape, (sfVector2f) {450, 175});
    sfRectangleShape_setPosition(d->r_s[7].rect_shape, d->r_s[7].pos);
    sfRectangleShape_setFillColor(d->r_s[7].rect_shape, sfRed);
    sfRectangleShape_setOutlineColor(d->r_s[7].rect_shape, sfYellow);
    sfRectangleShape_setTexture(d->r_s[7].rect_shape, d->r_s[7].tex, sfFalse);
}

void init_fps_three(my_defender_t *d)
{
    d->r_s[8].tex = sfTexture_createFromFile("assets/120.png", NULL);
    d->r_s[8].rect_shape = sfRectangleShape_create();
    d->r_s[8].pos = (sfVector2f) {1370, 470};
    sfRectangleShape_setSize(d->r_s[8].rect_shape, (sfVector2f) {450, 175});
    sfRectangleShape_setPosition(d->r_s[8].rect_shape, d->r_s[8].pos);
    sfRectangleShape_setFillColor(d->r_s[8].rect_shape, sfRed);
    sfRectangleShape_setOutlineColor(d->r_s[8].rect_shape, sfYellow);
    sfRectangleShape_setTexture(d->r_s[8].rect_shape, d->r_s[8].tex, sfFalse);
}

void init_back(my_defender_t *d)
{
    d->r_s[9].tex = sfTexture_createFromFile("assets/retour.png", NULL);
    d->r_s[9].rect_shape = sfRectangleShape_create();
    d->r_s[9].pos = (sfVector2f) {100, 870};
    sfRectangleShape_setSize(d->r_s[9].rect_shape, (sfVector2f) {100, 100});
    sfRectangleShape_setPosition(d->r_s[9].rect_shape, d->r_s[9].pos);
    sfRectangleShape_setFillColor(d->r_s[9].rect_shape, sfRed);
    sfRectangleShape_setOutlineColor(d->r_s[9].rect_shape, sfYellow);
    sfRectangleShape_setTexture(d->r_s[9].rect_shape, d->r_s[9].tex, sfFalse);
}

void init_fps_sprite(my_defender_t *d)
{
    init_fps_one(d);
    init_fps_two(d);
    init_fps_three(d);
    init_back(d);
}
