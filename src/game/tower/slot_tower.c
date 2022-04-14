/*
** EPITECH PROJECT, 2022
** My Defender
** File description:
** My Defender
*/

#include "my_defender.h"

void init_slot_tower(my_defender_t *d)
{
    for (int i = 0; i < 4; i++) {
        d->t_s[i].rect_shape = sfRectangleShape_create();
        sfRectangleShape_setSize(d->t_s[i].rect_shape,
        (sfVector2f) {100, 100});
        sfRectangleShape_setFillColor(d->t_s[i].rect_shape,
        (sfColor) {140, 146, 172, 255});
    }
    d->t_s[0].pos = (sfVector2f) {180, 300};
    d->t_s[1].pos = (sfVector2f) {800, 450};
    d->t_s[2].pos = (sfVector2f) {1100, 900};
    d->t_s[3].pos = (sfVector2f) {1550, 270};
    sfRectangleShape_setPosition(d->t_s[0].rect_shape, d->t_s[0].pos);
    sfRectangleShape_setPosition(d->t_s[1].rect_shape, d->t_s[1].pos);
    sfRectangleShape_setPosition(d->t_s[2].rect_shape, d->t_s[2].pos);
    sfRectangleShape_setPosition(d->t_s[3].rect_shape, d->t_s[3].pos);
}
