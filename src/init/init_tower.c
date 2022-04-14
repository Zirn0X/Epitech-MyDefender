/*
** EPITECH PROJECT, 2022
** My Defender
** File description:
** Init tower
*/

#include "my_defender.h"

void rect_tower(my_defender_t *d)
{
    d->t[0].rect.left = 48;
    d->t[1].rect.left = 0;
    d->t[2].rect.left = 96;
    d->t[3].rect.left = 144;
}

void init_tower(my_defender_t *d)
{
    rect_tower(d);
    for (int i = 0; i < 4; i++) {
        d->t[i].sprite = sfSprite_create();
        d->t[i].tex = sfTexture_createFromFile("assets/tower.png", NULL);
        d->t[i].rect.width = 48;
        d->t[i].rect.height = 82;
        d->t[i].rect.top = 0;
        sfSprite_setScale(d->t[i].sprite, (sfVector2f) {1.2, 1.2});
        sfSprite_setPosition(d->t[i].sprite, (sfVector2f)
        {d->t_s[i].pos.x + 20, d->t_s[i].pos.y});
        sfSprite_setTextureRect(d->t[i].sprite, d->t[i].rect);
        sfSprite_setTexture(d->t[i].sprite, d->t[i].tex, sfFalse);
    }
    for (int i = 0; i < 4; i++) {
        d->p_tower[i].tower = sfSprite_create();
        sfSprite_setPosition(d->p_tower[i].tower, (sfVector2f) {-100, -100});
    }
}
