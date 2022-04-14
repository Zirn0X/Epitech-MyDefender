/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-mydefender-jeras.bertine
** File description:
** background_sprite
*/

#include "my_defender.h"

void init_background_game(my_defender_t *d)
{
    d->s_p[0].sprite = sfSprite_create();
    d->s_p[0].tex = sfTexture_createFromFile("assets/bg_game.png", NULL);
    sfSprite_setTexture(d->s_p[0].sprite, d->s_p[0].tex, sfFalse);
}

void init_background(my_defender_t *d)
{
    d->s_m[0].sprite = sfSprite_create();
    d->s_m[0].tex = sfTexture_createFromFile("assets/background.png", NULL);
    sfSprite_setTexture(d->s_m[0].sprite, d->s_m[0].tex, sfFalse);
    d->s_m[1].sprite = sfSprite_create();
    d->s_m[1].tex = sfTexture_createFromFile("assets/title.png", NULL);
    sfSprite_setTexture(d->s_m[1].sprite, d->s_m[1].tex, sfFalse);
    d->s_m[0].pos = (sfVector2f) {400, 200};
    sfSprite_setPosition(d->s_m[1].sprite, d->s_m[0].pos);
}
