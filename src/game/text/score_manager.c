/*
** EPITECH PROJECT, 2022
** My Defender
** File description:
** Score Manager
*/

#include "my_defender.h"
#include "my.h"

void init_coins_sprite(my_defender_t *d)
{
    d->clock[2].clock = sfClock_create();
    d->s_coins[0].sprite = sfSprite_create();
    d->s_coins[0].tex = sfTexture_createFromFile("assets/emerald.png", NULL);
    d->s_coins[0].rect.height = 150;
    d->s_coins[0].rect.width = 150;
    d->s_coins[0].rect.left = 0;
    d->s_coins[0].rect.top = 0;
    sfSprite_setPosition(d->s_coins[0].sprite, (sfVector2f) {1840, 12});
    sfSprite_setScale(d->s_coins[0].sprite, (sfVector2f) {0.4, 0.4});
}

void init_coins(my_defender_t *d)
{
    d->clock[1].clock = sfClock_create();
    d->score = 50;
    d->txt[0].font = sfFont_createFromFile("assets/Minecraft.ttf");
    d->txt[0].text = sfText_create();
    sfText_setPosition(d->txt[0].text, (sfVector2f) {1780, 10});
    sfText_setColor(d->txt[0].text, sfYellow);
    sfText_setFont(d->txt[0].text, d->txt[0].font);
    sfText_setCharacterSize(d->txt[0].text, 50);
}
