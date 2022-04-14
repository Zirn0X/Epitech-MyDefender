/*
** EPITECH PROJECT, 2022
** My defender
** File description:
** Defender file
*/

#include <stdlib.h>
#include "my_defender.h"

my_defender_t init_struct(void)
{
    my_defender_t d;

    init_window(&d);
    init_menu_button(&d);
    init_background(&d);
    init_background_game(&d);
    init_option_sprite(&d);
    init_fps_sprite(&d);
    init_mob(&d);
    init_pause_button(&d);
    init_sound_sprite(&d);
    init_coins(&d);
    init_coins_sprite(&d);
    init_shop(&d);
    init_life(&d);
    init_slot_tower(&d);
    init_tower(&d);
    return d;
}

void my_defender(void)
{
    my_defender_t d = init_struct();

    music(&d);
    d.state = 0;
    d.volume = 0;
    d.click_t = -1;
    sfRenderWindow_setFramerateLimit(d.w.window, 60);
    while (sfRenderWindow_isOpen(d.w.window))
        check_state(&d);
    sfMusic_destroy(d.m[0].music);
}
