/*
** EPITECH PROJECT, 2022
** My Defender
** File description:
** Init shop
*/

#include "my_defender.h"

void init_shop(my_defender_t *d)
{
    d->s_shop[0].sprite = sfSprite_create();
    d->s_shop[0].tex = sfTexture_createFromFile
    ("assets/shop_tower.png", sfFalse);
    d->s_shop[0].pos = (sfVector2f) {0, 980};
    sfSprite_setPosition(d->s_shop[0].sprite, d->s_shop[0].pos);
    sfSprite_setTexture(d->s_shop[0].sprite, d->s_shop[0].tex, sfFalse);
}
