/*
** EPITECH PROJECT, 2022
** My Defender
** File description:
** Init life
*/

#include "my_defender.h"

void init_life(my_defender_t *d)
{
    d->s_life[0].sprite = sfSprite_create();
    d->s_life[0].tex = sfTexture_createFromFile("assets/life.png", NULL);
    d->s_life[0].rect.height = 179;
    d->s_life[0].rect.width = 630;
    d->s_life[0].rect.left = 0;
    d->s_life[0].rect.top = 179 * 5;
    d->s_life[0].pos = (sfVector2f) {10, 0};
    sfSprite_setPosition(d->s_life[0].sprite, d->s_life[0].pos);
    sfSprite_setScale(d->s_life[0].sprite, (sfVector2f) {0.3, 0.3});
    d->txt[1].font = sfFont_createFromFile("assets/Minecraft.ttf");
    d->txt[1].text = sfText_create();
    sfText_setPosition(d->txt[1].text, (sfVector2f) {210, 0});
    sfText_setColor(d->txt[1].text, sfRed);
    sfText_setFont(d->txt[1].text, d->txt[1].font);
    sfText_setCharacterSize(d->txt[1].text, 50);
    d->life = 6;
}
