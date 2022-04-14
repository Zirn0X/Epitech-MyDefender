/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-mydefender-jeras.bertine
** File description:
** check_loop
*/

#include "my_defender.h"

void check_state(my_defender_t *d)
{
    switch (d->state) {
        case 0:
            menu_loop(d);
            break;
        case 1:
            game_loop(d);
            break;
        case 2:
            option_loop(d);
            break;
        case 3:
            fps_loop(d);
            break;
        case 4:
            sound_loop(d);
            break;
        case 5:
            pause_loop(d);
            break;
    }
}
