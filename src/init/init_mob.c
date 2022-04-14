/*
** EPITECH PROJECT, 2022
** My Defender
** File description:
** Init mob
*/

#include "my_defender.h"

void init_skeleton(my_defender_t *d)
{
    for (int i = 5; i < 10; i++) {
        d->s_mob[i].sprite = sfSprite_create();
        d->s_mob[i].tex = sfTexture_createFromFile
        ("assets/skeleton.png", NULL);
        d->s_mob[i].rect.height = 720;
        d->s_mob[i].rect.width = 372;
        d->s_mob[i].rect.left = 0;
        d->s_mob[i].rect.top = 0;
        sfSprite_setScale(d->s_mob[i].sprite, (sfVector2f) {0.12, 0.12});
    }
}

void init_mob(my_defender_t *d)
{
    d->clock[0].clock = sfClock_create();
    for (int i = 0; i < 5; i++) {
        d->s_mob[i].sprite = sfSprite_create();
        d->s_mob[i].tex = sfTexture_createFromFile
        ("assets/zombie.png", NULL);
        d->s_mob[i].rect.height = 177;
        d->s_mob[i].rect.width = 117;
        d->s_mob[i].rect.left = 0;
        d->s_mob[i].rect.top = 0;
        sfSprite_setScale(d->s_mob[i].sprite, (sfVector2f) {0.5, 0.5});
    }
    init_skeleton(d);
    set_start_position(d);
}