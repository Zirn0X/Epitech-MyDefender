/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-mydefender-jeras.bertine
** File description:
** option_event
*/

#include "my_defender.h"

void sound(my_defender_t *d)
{
    if (d->w.event.mouseButton.x <= d->r_s[3].pos.x + 400 &&
        d->w.event.mouseButton.x >= d->r_s[3].pos.x &&
        d->w.event.mouseButton.y >= d->r_s[3].pos.y
        && d->w.event.mouseButton.y <= d->r_s[3].pos.y + 170) {
        click(d);
        sfRenderWindow_clear(d->w.window, sfTransparent);
        d->state = 4;
    }
}

void home_function(my_defender_t *d)
{
    if (d->w.event.mouseButton.x <= d->r_s[4].pos.x + 400 &&
        d->w.event.mouseButton.x >= d->r_s[4].pos.x &&
        d->w.event.mouseButton.y >= d->r_s[4].pos.y
        && d->w.event.mouseButton.y <= d->r_s[4].pos.y + 170) {
        click(d);
        sfRenderWindow_clear(d->w.window, sfTransparent);
        d->state = 3;
    } else
        sound(d);
    if (d->w.event.mouseButton.x <= d->r_s[5].pos.x + 100 &&
        d->w.event.mouseButton.x >= d->r_s[5].pos.x &&
        d->w.event.mouseButton.y >= d->r_s[5].pos.y
        && d->w.event.mouseButton.y <= d->r_s[5].pos.y + 100) {
        click(d);
        sfRenderWindow_clear(d->w.window, sfTransparent);
        d->state = 0;
    }
}

void option_events(my_defender_t *d)
{
    while (sfRenderWindow_pollEvent(d->w.window, &d->w.event)) {
        if (d->w.event.type == sfEvtClosed)
            sfRenderWindow_close(d->w.window);
        if (d->w.event.type == sfEvtMouseMoved)
            option_move(d);
        if (d->w.event.type == sfEvtMouseButtonPressed)
            home_function(d);
    }
}
