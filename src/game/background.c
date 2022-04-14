/*
** EPITECH PROJECT, 2022
** My Defender
** File description:
** Background game
*/

#include <stdio.h>
#include "my_defender.h"
#include "my.h"

void draw_background(my_defender_t *d)
{
    sfRenderWindow_drawSprite(d->w.window, d->s_m[0].sprite, NULL);
}

static void draw_sprites(my_defender_t *d)
{
    sfRenderWindow_drawSprite(d->w.window, d->s_p[0].sprite, NULL);
    sfSprite_setTextureRect(d->s_life[0].sprite, d->s_life[0].rect);
    sfSprite_setTexture(d->s_life[0].sprite, d->s_life[0].tex, sfFalse);
    sfRenderWindow_drawSprite(d->w.window, d->s_life[0].sprite, NULL);
    sfSprite_setTextureRect(d->s_mob[6].sprite, d->s_mob[6].rect);
    sfSprite_setTexture(d->s_mob[6].sprite, d->s_mob[6].tex, sfFalse);
    sfRenderWindow_drawSprite(d->w.window, d->s_mob[6].sprite, NULL);
    sfSprite_setTextureRect(d->s_coins[0].sprite, d->s_coins[0].rect);
    sfSprite_setTexture(d->s_coins[0].sprite, d->s_coins[0].tex, sfFalse);
    sfRenderWindow_drawSprite(d->w.window, d->s_coins[0].sprite, NULL);
}

static void draw_text(my_defender_t *d)
{
    if (d->score >= 100)
        sfText_setPosition(d->txt[0].text, (sfVector2f) {1750, 10});
    sfText_setString(d->txt[0].text, itoa(d->score));
    sfRenderWindow_drawText(d->w.window, d->txt[0].text, NULL);
}

static void draw_towers(my_defender_t *d)
{
    sfRenderWindow_drawSprite(d->w.window, d->s_shop[0].sprite, NULL);
    sfRenderWindow_drawSprite(d->w.window, d->p_tower[0].tower, NULL);
    sfRenderWindow_drawSprite(d->w.window, d->p_tower[1].tower, NULL);
    sfRenderWindow_drawSprite(d->w.window, d->p_tower[2].tower, NULL);
    sfRenderWindow_drawSprite(d->w.window, d->p_tower[3].tower, NULL);
}

void draw_bg_game(my_defender_t *d)
{
    draw_sprites(d);
    draw_text(d);
    for (int i = 0; i < 4; i++)
        sfRenderWindow_drawRectangleShape(d->w.window,
        d->t_s[i].rect_shape, NULL);
    draw_towers(d);
    sfRenderWindow_display(d->w.window);
}
