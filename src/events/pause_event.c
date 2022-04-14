/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-mydefender-jeras.bertine
** File description:
** pause_event
*/

#include "my_defender.h"

void pause_move(my_defender_t *d)
{
    for (int i = 11; i < 13; i++) {
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

void pause_function(my_defender_t *d)
{
    sfVector2f button = {d->w.event.mouseButton.x, d->w.event.mouseButton.y};
    if (button.x <= d->r_s[11].pos.x + 450 && button.x >= d->r_s[11].pos.x &&
        button.y >= d->r_s[11].pos.y && button.y <= d->r_s[11].pos.y + 175) {
        click(d);
        sfRenderWindow_clear(d->w.window, sfTransparent);
        d->state = 1;
    }
    if (button.x <= d->r_s[12].pos.x + 450 &&
        button.x >= d->r_s[12].pos.x &&
        button.y >= d->r_s[12].pos.y && button.y <= d->r_s[12].pos.y + 175) {
        click(d);
        sfRenderWindow_clear(d->w.window, sfTransparent);
        d->state = 0;
        d->score = 50;
        init_life(d);
        init_slot_tower(d);
        init_tower(d);
        set_start_position(d);
    }
}

void pause_events(my_defender_t *d)
{
    while (sfRenderWindow_pollEvent(d->w.window, &d->w.event)) {
        if (d->w.event.type == sfEvtClosed) {
            clear_struct(d);
            sfRenderWindow_close(d->w.window);
        }
        if (d->w.event.type == sfEvtMouseMoved)
            pause_move(d);
        if (d->w.event.type == sfEvtMouseButtonPressed)
            pause_function(d);
    }
}
