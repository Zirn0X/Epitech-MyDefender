/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-mydefender-jeras.bertine
** File description:
** sound_event
*/

#include "my_defender.h"
#include <stdio.h>

void check_volume(my_defender_t *d)
{
    if (d->volume == 0) {
        sfMusic_setVolume(d->m[0].music, 100);
        sfMusic_play(d->m[0].music);
    }
    if (d->volume == 1) {
        sfMusic_setVolume(d->m[0].music, 0);
        sfMusic_pause(d->m[0].music);
    }
}

void mute_function(my_defender_t *d)
{
    if (d->w.event.mouseButton.x <= d->r_s[10].pos.x + 200 &&
        d->w.event.mouseButton.x >= d->r_s[10].pos.x &&
        d->w.event.mouseButton.y >= d->r_s[10].pos.y
        && d->w.event.mouseButton.y <= d->r_s[10].pos.y + 200) {
        click(d);
        d->volume = 1;
        sfMusic_setVolume(d->m[0].music, 0);
    }

    if (d->w.event.mouseButton.x <= d->r_s[10].pos.x + 200 &&
        d->w.event.mouseButton.x >= d->r_s[10].pos.x &&
        d->w.event.mouseButton.y >= d->r_s[10].pos.y
        && d->w.event.mouseButton.y <= d->r_s[10].pos.y + 200 &&
        d->volume == 1) {
        click(d);
        sfMusic_setVolume(d->m[0].music, 100);
        d->volume = 0;
    }
}

void sound_function(my_defender_t *d)
{
    if (d->w.event.mouseButton.x <= d->r_s[5].pos.x + 100 &&
        d->w.event.mouseButton.x >= d->r_s[5].pos.x &&
        d->w.event.mouseButton.y >= d->r_s[5].pos.y
        && d->w.event.mouseButton.y <= d->r_s[5].pos.y + 100) {
        click(d);
        sfRenderWindow_clear(d->w.window, sfTransparent);
        d->state = 0;
    } else if (d->w.event.mouseButton.x <= d->r_s[9].pos.x + 100 &&
        d->w.event.mouseButton.x >= d->r_s[9].pos.x &&
        d->w.event.mouseButton.y >= d->r_s[9].pos.y
        && d->w.event.mouseButton.y <= d->r_s[9].pos.y + 100) {
        click(d);
        sfRenderWindow_clear(d->w.window, sfTransparent);
        d->state = 2;
    } else
        mute_function(d);
}

void sound_events(my_defender_t *d)
{
    while (sfRenderWindow_pollEvent(d->w.window, &d->w.event)) {
        if (d->w.event.type == sfEvtClosed)
            sfRenderWindow_close(d->w.window);
        if (d->w.event.type == sfEvtMouseMoved)
            option_move(d);
        if (d->w.event.type == sfEvtMouseButtonPressed)
            sound_function(d);
    }
}
