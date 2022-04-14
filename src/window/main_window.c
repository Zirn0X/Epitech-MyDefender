/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-mydefender-jeras.bertine
** File description:
** main_window
*/

#include "my_defender.h"

void init_window(my_defender_t *d)
{
    d->w.mode.width = 1920;
    d->w.mode.height = 1080;
    d->w.mode.bitsPerPixel = 64;

    d->w.window = sfRenderWindow_create(d->w.mode, "My Defender",
                        sfDefaultStyle, NULL);
}
