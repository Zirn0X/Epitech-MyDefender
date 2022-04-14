/*
** EPITECH PROJECT, 2022
** My Defender
** File description:
** Clear struct
*/

#include "my_defender.h"

static void clear_textures(my_defender_t *d)
{
    for (int i = 0; i < 1; i++)
        sfTexture_destroy(d->s_m[i].tex);
    for (int i = 0; i < 10; i++)
        sfTexture_destroy(d->s_mob[i].tex);
    for (int i = 0; i < 4; i++)
        sfTexture_destroy(d->t[i].tex);
    for (int i = 0; i < 13; i++)
        sfTexture_destroy(d->r_s[i].tex);
}

static void clear_sprites(my_defender_t *d)
{
    for (int i = 0; i < 2; i++)
        sfSprite_destroy(d->s_m[i].sprite);
    for (int i = 0; i < 10; i++)
        sfSprite_destroy(d->s_mob[i].sprite);
    for (int i = 0; i < 4; i++)
        sfSprite_destroy(d->t[i].sprite);
    for (int i = 0; i < 13; i++)
        sfRectangleShape_destroy(d->r_s[i].rect_shape);
    for (int i = 0; i < 4; i++)
        sfRectangleShape_destroy(d->t_s[i].rect_shape);
    for (int i = 0; i < 4; i++)
        sfSprite_destroy(d->p_tower[i].tower);
}

void clear_struct(my_defender_t *d)
{
    sfClock_destroy(d->clock[0].clock);
    sfClock_destroy(d->clock[1].clock);
    sfClock_destroy(d->clock[2].clock);
    sfText_destroy(d->txt[0].text);
    sfText_destroy(d->txt[1].text);
    sfFont_destroy(d->txt[1].font);
    sfFont_destroy(d->txt[0].font);
    clear_sprites(d);
    clear_textures(d);
}
