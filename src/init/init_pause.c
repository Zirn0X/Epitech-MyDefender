/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-mydefender-jeras.bertine
** File description:
** init_pause
*/

#include "my_defender.h"

void init_resume(my_defender_t *d)
{
    d->r_s[11].tex = sfTexture_createFromFile("assets/resume.png", NULL);
    d->r_s[11].rect_shape = sfRectangleShape_create();
    d->r_s[11].pos = (sfVector2f) {300, 500};
    sfRectangleShape_setSize(d->r_s[11].rect_shape, (sfVector2f) {450, 175});
    sfRectangleShape_setPosition(d->r_s[11].rect_shape, d->r_s[11].pos);
    sfRectangleShape_setFillColor(d->r_s[11].rect_shape, sfRed);
    sfRectangleShape_setOutlineColor(d->r_s[11].rect_shape, sfYellow);
    sfRectangleShape_setTexture(d->r_s[11].rect_shape,
    d->r_s[11].tex, sfFalse);
}

void init_home_pause(my_defender_t *d)
{
    d->r_s[12].tex = sfTexture_createFromFile("assets/home2.png", NULL);
    d->r_s[12].rect_shape = sfRectangleShape_create();
    d->r_s[12].pos = (sfVector2f) {1100, 500};
    sfRectangleShape_setSize(d->r_s[12].rect_shape, (sfVector2f) {450, 175});
    sfRectangleShape_setPosition(d->r_s[12].rect_shape, d->r_s[12].pos);
    sfRectangleShape_setFillColor(d->r_s[12].rect_shape, sfRed);
    sfRectangleShape_setOutlineColor(d->r_s[12].rect_shape, sfYellow);
    sfRectangleShape_setTexture(d->r_s[12].rect_shape, d->r_s[12].tex,
    sfFalse);
}

void init_pause_button(my_defender_t *d)
{
    init_home_pause(d);
    init_resume(d);
}