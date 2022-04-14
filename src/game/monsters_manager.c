/*
** EPITECH PROJECT, 2022
** My Defender
** File description:
** Monsters Manager
*/

#include <stdio.h>
#include "my_defender.h"

void set_start_position(my_defender_t *d)
{
    for (int i = 0; i < 5; i++) {
        d->s_mob[i].pos.x = 45;
        d->s_mob[i].pos.y = 180;
        sfSprite_setPosition(d->s_mob[i].sprite,
        (sfVector2f) {d->s_mob[i].pos.x, d->s_mob[i].pos.y});
    }
    for (int i = 5; i < 10; i++) {
        d->s_mob[i].pos.x = 45;
        d->s_mob[i].pos.y = 190;
        sfSprite_setPosition(d->s_mob[i].sprite,
        (sfVector2f) {d->s_mob[i].pos.x, d->s_mob[i].pos.y});
    }
}

static void move_monsters(sfVector2f *pos)
{
    if (pos->x < 700)
        pos->x += 1;
    if (pos->x == 700 && pos->y < 780)
        pos->y += 1;
    if (pos->x >= 700 && pos->x < 1250 &&
        pos->y >= 780)
        pos->x += 1;
    if (pos->x == 1250 && pos->y > 380)
        pos->y -= 1;
    if (pos->x >= 1250 && pos->x < 1920 &&
        pos->y == 380)
        pos->x += 1;
}

void monsters_manager(my_defender_t *d)
{
    move_monsters(&d->s_mob[0].pos);
    move_monsters(&d->s_mob[6].pos);
    sfSprite_setPosition(d->s_mob[0].sprite, d->s_mob[0].pos);
    sfSprite_setPosition(d->s_mob[6].sprite, d->s_mob[6].pos);
}
