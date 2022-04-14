/*
** EPITECH PROJECT, 2022
** My Defender
** File description:
** Check pos mob
*/

#include "my_defender.h"

void check_pos_mob(my_defender_t *d)
{
    sfVector2f limit = {1870, 380};

    for (int i = 0; i < 10; i++) {
        if (d->s_mob[i].pos.x >= limit.x && d->s_mob[i].pos.y == limit.y
        && d->life > 0) {
            d->s_mob[i].pos.x = 45;
            d->s_mob[i].pos.y = 180;
            d->life -= 1;
            move_rect_life(&d->s_life[0].rect, 179, 0);
        }
        if (d->life < 0) {
            clear_struct(d);
            sfRenderWindow_destroy(d->w.window);
            sfRenderWindow_close(d->w.window);
        }
    }
}
