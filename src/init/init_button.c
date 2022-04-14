/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-mydefender-jeras.bertine
** File description:
** init_button
*/

#include "my_defender.h"

void init_start(my_defender_t *d)
{
    d->r_s[0].tex = sfTexture_createFromFile("assets/start.png", NULL);
    d->r_s[0].rect_shape = sfRectangleShape_create();
    d->r_s[0].pos = (sfVector2f) {250, 700};
    sfRectangleShape_setSize(d->r_s[0].rect_shape, (sfVector2f) {300, 175});
    sfRectangleShape_setPosition(d->r_s[0].rect_shape, d->r_s[0].pos);
    sfRectangleShape_setFillColor(d->r_s[0].rect_shape, sfRed);
    sfRectangleShape_setOutlineColor(d->r_s[0].rect_shape, sfYellow);
    sfRectangleShape_setTexture(d->r_s[0].rect_shape, d->r_s[0].tex, sfFalse);
}

void init_exit(my_defender_t *d)
{
    d->r_s[1].tex = sfTexture_createFromFile("assets/exit.png", NULL);
    d->r_s[1].rect_shape = sfRectangleShape_create();
    d->r_s[1].pos = (sfVector2f) {1300, 700};
    sfRectangleShape_setSize(d->r_s[1].rect_shape, (sfVector2f) {300, 175});
    sfRectangleShape_setPosition(d->r_s[1].rect_shape, d->r_s[1].pos);
    sfRectangleShape_setFillColor(d->r_s[1].rect_shape, sfRed);
    sfRectangleShape_setOutlineColor(d->r_s[1].rect_shape, sfYellow);
    sfRectangleShape_setTexture(d->r_s[1].rect_shape, d->r_s[1].tex, sfFalse);
}

void init_option(my_defender_t *d)
{
    d->r_s[2].tex = sfTexture_createFromFile("assets/option.png", NULL);
    d->r_s[2].rect_shape = sfRectangleShape_create();
    d->r_s[2].pos = (sfVector2f) {760, 715};
    sfRectangleShape_setSize(d->r_s[2].rect_shape, (sfVector2f) {300, 150});
    sfRectangleShape_setPosition(d->r_s[2].rect_shape, d->r_s[2].pos);
    sfRectangleShape_setFillColor(d->r_s[2].rect_shape, sfRed);
    sfRectangleShape_setOutlineColor(d->r_s[2].rect_shape, sfYellow);
    sfRectangleShape_setTexture(d->r_s[2].rect_shape, d->r_s[2].tex, sfFalse);
}

void init_menu_button(my_defender_t *d)
{
    init_start(d);
    init_exit(d);
    init_option(d);
}
