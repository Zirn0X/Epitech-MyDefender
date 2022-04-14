/*
** EPITECH PROJECT, 2022
** My Defender
** File description:
** Analyse event
*/

#include "my_defender.h"

void mouse_move(my_defender_t *d)
{
    for (int i = 0; i < 3; i++) {
        if (d->w.event.mouseMove.x <= d->r_s[i].pos.x + 265 &&
        d->w.event.mouseMove.x >= d->r_s[i].pos.x &&
        d->w.event.mouseMove.y >= d->r_s[i].pos.y
        && d->w.event.mouseMove.y <= d->r_s[i].pos.y + 150) {
            sfRectangleShape_setOutlineThickness(d->r_s[i].rect_shape, 5);
            sfRectangleShape_setFillColor(d->r_s[i].rect_shape,
            (sfColor) {255, 255, 255, 150});
        } else {
            sfRectangleShape_setOutlineThickness(d->r_s[i].rect_shape, 0);
            sfRectangleShape_setFillColor(d->r_s[i].rect_shape,
            (sfColor) {255, 255, 255, 255});
        }
    }
}

void button_function(my_defender_t *d)
{
    if (d->w.event.mouseButton.x <= d->r_s[1].pos.x + 265 &&
        d->w.event.mouseButton.x >= d->r_s[1].pos.x &&
        d->w.event.mouseButton.y >= d->r_s[1].pos.y
        && d->w.event.mouseButton.y <= d->r_s[1].pos.y + 150) {
        sfRenderWindow_close(d->w.window);
        clear_struct(d);
    } else if (d->w.event.mouseButton.x <= d->r_s[0].pos.x + 265 &&
        d->w.event.mouseButton.x >= d->r_s[0].pos.x &&
        d->w.event.mouseButton.y >= d->r_s[0].pos.y
        && d->w.event.mouseButton.y <= d->r_s[0].pos.y + 150) {
        click(d);
        sfRenderWindow_clear(d->w.window, sfTransparent);
        d->state = 1;
    }
    if (d->w.event.mouseButton.x <= d->r_s[2].pos.x + 265 &&
        d->w.event.mouseButton.x >= d->r_s[2].pos.x &&
        d->w.event.mouseButton.y >= d->r_s[2].pos.y
        && d->w.event.mouseButton.y <= d->r_s[2].pos.y + 150) {
        click(d);
        sfRenderWindow_clear(d->w.window, sfTransparent);
        d->state = 2;
    }
}

void main_window_events(my_defender_t *d)
{
    while (sfRenderWindow_pollEvent(d->w.window, &d->w.event)) {
        if (d->w.event.type == sfEvtClosed) {
            clear_struct(d);
            sfRenderWindow_close(d->w.window);
        }
        if (d->w.event.type == sfEvtMouseMoved)
            mouse_move(d);
        if (d->w.event.type == sfEvtMouseButtonPressed)
            button_function(d);
    }
}
