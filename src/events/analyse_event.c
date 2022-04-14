/*
** EPITECH PROJECT, 2022
** My Defender
** File description:
** Analyse Events game
*/

#include "my_defender.h"
#include "my.h"

static void check_pos_click(my_defender_t *d)
{
    for (int i = 0; i < 4; i++) {
        if (d->w.event.mouseButton.x <= d->t_s[i].pos.x + 100 &&
        d->w.event.mouseButton.x >= d->t_s[i].pos.x &&
        d->w.event.mouseButton.y >= d->t_s[i].pos.y &&
        d->w.event.mouseButton.y <= d->t_s[i].pos.y + 100) {
            d->click_t = i;
        }
    }
    spawn_tower(d);
    spawn_other_tower(d);
}

void manager_events_game(my_defender_t *d)
{
    while (sfRenderWindow_pollEvent(d->w.window, &d->w.event)) {
        if (d->w.event.type == sfEvtClosed) {
            clear_struct(d);
            sfRenderWindow_close(d->w.window);
        }
        if (d->w.event.type == sfEvtKeyPressed) {
            if (d->w.event.key.code == sfKeyEscape) {
                sfRenderWindow_clear(d->w.window, sfTransparent);
                d->state = 5;
            }
        }
        if (d->w.event.type == sfEvtMouseButtonPressed)
            check_pos_click(d);
    }
}

void option_move(my_defender_t *d)
{
    for (int i = 3; i < 12; i++) {
        if (d->w.event.mouseMove.x <= d->r_s[i].pos.x + 400 &&
        d->w.event.mouseMove.x >= d->r_s[i].pos.x &&
        d->w.event.mouseMove.y >= d->r_s[i].pos.y
        && d->w.event.mouseMove.y <= d->r_s[i].pos.y + 170) {
            sfRectangleShape_setOutlineThickness(d->r_s[i].rect_shape, 5);
            sfRenderWindow_drawRectangleShape(d->w.window,
            d->r_s[i].rect_shape, NULL);
        } else {
            sfRectangleShape_setOutlineThickness(d->r_s[i].rect_shape, 0);
            sfRenderWindow_drawRectangleShape(d->w.window,
            d->r_s[i].rect_shape, NULL);
        }
    }
}
