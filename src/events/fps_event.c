/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-mydefender-jeras.bertine
** File description:
** fps_event
*/

#include "my_defender.h"

void check_fps(my_defender_t *d)
{
    if (d->w.event.mouseButton.x <= d->r_s[6].pos.x + 455 &&
        d->w.event.mouseButton.x >= d->r_s[6].pos.x &&
        d->w.event.mouseButton.y >= d->r_s[6].pos.y
        && d->w.event.mouseButton.y <= d->r_s[6].pos.y + 175) {
        click(d);
        sfRenderWindow_setFramerateLimit(d->w.window, 30);
    }
    if (d->w.event.mouseButton.x <= d->r_s[7].pos.x + 455 &&
        d->w.event.mouseButton.x >= d->r_s[7].pos.x &&
        d->w.event.mouseButton.y >= d->r_s[7].pos.y
        && d->w.event.mouseButton.y <= d->r_s[7].pos.y + 175) {
        click(d);
        sfRenderWindow_setFramerateLimit(d->w.window, 60);
    } else if (d->w.event.mouseButton.x <= d->r_s[8].pos.x + 455 &&
        d->w.event.mouseButton.x >= d->r_s[8].pos.x &&
        d->w.event.mouseButton.y >= d->r_s[8].pos.y
        && d->w.event.mouseButton.y <= d->r_s[8].pos.y + 175) {
        click(d);
        sfRenderWindow_setFramerateLimit(d->w.window, 120);
    }
}

void fps_function(my_defender_t *d)
{
    if (d->w.event.mouseButton.x <= d->r_s[5].pos.x + 100 &&
        d->w.event.mouseButton.x >= d->r_s[5].pos.x &&
        d->w.event.mouseButton.y >= d->r_s[5].pos.y
        && d->w.event.mouseButton.y <= d->r_s[5].pos.y + 100) {
        click(d);
        sfRenderWindow_clear(d->w.window, sfTransparent);
        d->state = 0;
    } else
        check_fps(d);
    if (d->w.event.mouseButton.x <= d->r_s[9].pos.x + 100 &&
        d->w.event.mouseButton.x >= d->r_s[9].pos.x &&
        d->w.event.mouseButton.y >= d->r_s[9].pos.y
        && d->w.event.mouseButton.y <= d->r_s[9].pos.y + 100) {
        click(d);
        sfRenderWindow_clear(d->w.window, sfTransparent);
        d->state = 2;
    }
}

void fps_move(my_defender_t *d)
{
    for (int i = 5; i < 10; i++) {
        if (d->w.event.mouseMove.x <= d->r_s[i].pos.x + 460 &&
        d->w.event.mouseMove.x >= d->r_s[i].pos.x &&
        d->w.event.mouseMove.y >= d->r_s[i].pos.y
        && d->w.event.mouseMove.y <= d->r_s[i].pos.y + 175) {
            sfRectangleShape_setOutlineThickness(d->r_s[i].rect_shape, 5);
            sfRenderWindow_drawRectangleShape(d->w.window,
            d->r_s[i].rect_shape, NULL);
        } else
            sfRectangleShape_setOutlineThickness(d->r_s[i].rect_shape, 0);
    }
}

void fps_events(my_defender_t *d)
{
    while (sfRenderWindow_pollEvent(d->w.window, &d->w.event)) {
        if (d->w.event.type == sfEvtClosed)
            sfRenderWindow_close(d->w.window);
        if (d->w.event.type == sfEvtMouseMoved)
            fps_move(d);
        if (d->w.event.type == sfEvtMouseButtonPressed)
            fps_function(d);
    }
}
