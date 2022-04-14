/*
** EPITECH PROJECT, 2022
** My Defender
** File description:
** Game Loop
*/

#include "my_defender.h"
#include "my.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left == max_value)
        rect->left = 0;
}

void move_rect_life(sfIntRect *rect, int offset, int max_value)
{
    rect->top -= offset;
    if (rect->top == max_value)
        rect->top = 0;
}

void tower_loop(my_defender_t *d)
{
    d->clock[0].time = sfClock_getElapsedTime(d->clock[0].clock);
    d->clock[0].seconds = d->clock[0].time.microseconds / 10000.0;

    if (d->clock[0].seconds > 3) {
        move_rect(&d->s_mob[0].rect, 117, 2808);
        move_rect(&d->s_mob[6].rect, 372, 8928);
        sfClock_restart(d->clock[0].clock);
    }
    add_point(d);
    coins_sprite(d);
    monsters_manager(d);
    draw_bg_game(d);
    check_pos_mob(d);
    manager_events_game(d);
}

void game_loop(my_defender_t *d)
{
    d->clock[0].time = sfClock_getElapsedTime(d->clock[0].clock);
    d->clock[0].seconds = d->clock[0].time.microseconds / 10000.0;

    if (d->clock[0].seconds > 3) {
        move_rect(&d->s_mob[0].rect, 117, 2808);
        move_rect(&d->s_mob[6].rect, 372, 8928);
        sfClock_restart(d->clock[0].clock);
    }
    add_point(d);
    coins_sprite(d);
    monsters_manager(d);
    draw_bg_game(d);
    check_pos_mob(d);
    manager_events_game(d);
}
