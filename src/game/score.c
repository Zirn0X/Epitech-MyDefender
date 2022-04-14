/*
** EPITECH PROJECT, 2022
** My Defender
** File description:
** Score
*/

#include "my_defender.h"

void add_point(my_defender_t *d)
{
    d->clock[1].time = sfClock_getElapsedTime(d->clock[1].clock);
    d->clock[1].seconds = d->clock[1].time.microseconds / 100000.0;
    if (d->clock[1].seconds > 9) {
        d->score += 1;
        sfClock_restart(d->clock[1].clock);
    }
}

void coins_sprite(my_defender_t *d)
{
    d->clock[2].time = sfClock_getElapsedTime(d->clock[2].clock);
    d->clock[2].seconds = d->clock[2].time.microseconds / 100000.0;
    if (d->clock[2].seconds > 1) {
        move_rect(&d->s_coins[0].rect, 150, 7500);
        sfClock_restart(d->clock[2].clock);
    }
}
