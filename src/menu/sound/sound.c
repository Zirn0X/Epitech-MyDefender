/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-mydefender-jeras.bertine
** File description:
** sound
*/

#include "my_defender.h"

void music(my_defender_t *d)
{
    d->m[0].music = sfMusic_createFromFile("assets/menu.ogg");
    sfMusic_setLoop(d->m[0].music, true);
    sfMusic_play(d->m[0].music);
}

void click(my_defender_t *d)
{
    d->m[1].music = sfMusic_createFromFile("assets/click.ogg");
    sfMusic_play(d->m[1].music);
}
