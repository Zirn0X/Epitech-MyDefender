/*
** EPITECH PROJECT, 2022
** My defender
** File description:
** Shop manager
*/

#include "my_defender.h"

void spawn_tower(my_defender_t *d)
{
    if (d->w.event.mouseButton.x <= 70 && d->w.event.mouseButton.x >= 14 &&
        d->w.event.mouseButton.y >= 995 && d->w.event.mouseButton.y <= 1060 &&
        d->click_t != -1 && d->score >= 20) {
            d->p_tower[d->click_t].tower = sfSprite_copy(d->t[0].sprite);
            sfSprite_setPosition(d->p_tower[d->click_t].tower,
            (sfVector2f) {d->t_s[d->click_t].pos.x + 20,
            d->t_s[d->click_t].pos.y});
            d->score -= 20;
            d->click_t = -1;
    } else if (d->w.event.mouseButton.x <= 166 && d->w.event.mouseButton.x >= 103 &&
        d->w.event.mouseButton.y >= 995 && d->w.event.mouseButton.y <= 1060 &&
        d->click_t != -1 && d->score >= 40) {
            d->p_tower[d->click_t].tower = sfSprite_copy(d->t[1].sprite);
            sfSprite_setPosition(d->p_tower[d->click_t].tower,
            (sfVector2f) {d->t_s[d->click_t].pos.x + 20,
            d->t_s[d->click_t].pos.y});
            d->score -= 40;
            d->click_t = -1;
    }
}

void spawn_other_towr(my_defender_t *d)
{
    d->p_tower[d->click_t].tower = sfSprite_copy(d->t[3].sprite);
    sfSprite_setPosition(d->p_tower[d->click_t].tower,
    (sfVector2f) {d->t_s[d->click_t].pos.x + 20,
    d->t_s[d->click_t].pos.y});
    d->score -= 60;
    d->click_t = -1;
}

void spawn_other_tower(my_defender_t *d)
{
    if (d->w.event.mouseButton.x <= 280 && d->w.event.mouseButton.x >= 218 &&
        d->w.event.mouseButton.y >= 985 && d->w.event.mouseButton.y <= 1060 &&
        d->click_t != -1 && d->score >= 50) {
            d->p_tower[d->click_t].tower = sfSprite_copy(d->t[2].sprite);
            sfSprite_setPosition(d->p_tower[d->click_t].tower,
            (sfVector2f) {d->t_s[d->click_t].pos.x + 20,
            d->t_s[d->click_t].pos.y});
            d->score -= 50;
            d->click_t = -1;
    } else if (d->w.event.mouseButton.x <= 380 &&
        d->w.event.mouseButton.x >= 323 &&
        d->w.event.mouseButton.y >= 985 &&
        d->w.event.mouseButton.y <= 1060 &&
        d->click_t != -1 && d->score >= 60) {
            spawn_other_towr(d);
    }
}