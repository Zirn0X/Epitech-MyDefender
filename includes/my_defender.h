/*
** EPITECH PROJECT, 2022
** My Defender
** File description:
** Header's File
*/

#include <SFML/Graphics.h>
#include <SFML/System/Clock.h>
#include <SFML/Audio.h>
#include <SFML/Window/Mouse.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdbool.h>

#ifndef MY_DEFENDER
    #define MY_DEFENDER

typedef struct sprite_s {
    sfSprite *sprite;
    sfTexture *tex;
    sfIntRect rect;
    sfVector2f pos;
} sprite_t;

typedef struct text_s {
    sfText *text;
    sfFont *font;
    sfVector2f pos;
} text_t;

typedef struct rect_shape_s {
    sfRectangleShape *rect_shape;
    sfTexture *tex;
    sfVector2f pos;
} rect_shape_t;

typedef struct window_s {
    sfRenderWindow *window;
    sfEvent event;
    sfVideoMode mode;
} window_t;

typedef struct music_s {
    sfMusic *music;
} music_t;

typedef struct pos_tower_s {
    sfVector2f pos;
    sfSprite *tower;
    int state;
} pos_tower_t;

typedef struct clock_s {
    sfClock *clock;
    sfTime time;
    float seconds;
} clock_rect_t;

typedef struct my_defender_s {
    window_t w;
    sprite_t s_m[2]; // sprite menu
    sprite_t s_o[1]; // sprite options
    sprite_t s_p[1]; // sprite pause
    sprite_t s_mob[10];
    sprite_t s_coins[1];
    sprite_t s_life[1];
    sprite_t t[4];
    rect_shape_t r_s[14];
    sprite_t s_shop[1];
    rect_shape_t t_s[4];
    clock_rect_t clock[3];
    music_t m[2];
    text_t txt[2];
    int state;
    int volume;
    int score;
    int life;
    pos_tower_t p_tower[4];
    int click_t;
} my_defender_t;

void init_window(my_defender_t *w);
void my_defender(void);
void usage(void);
void main_window_events(my_defender_t *d);
void init_start(my_defender_t *d);
void init_exit(my_defender_t *d);
void menu_loop(my_defender_t *d);
void music(my_defender_t *d);
void init_background(my_defender_t *d);
void init_option(my_defender_t *d);
void manager_events_game(my_defender_t *d);
void draw_bg_game(my_defender_t *d);
void init_background_game(my_defender_t *d);
void clean_menu(my_defender_t *d);
void game_loop(my_defender_t *d);
void option_events(my_defender_t *d);
void mouse_move(my_defender_t *d);
void click(my_defender_t *d);
void init_fps_sprite(my_defender_t *d);
void init_sound_sprite(my_defender_t *d);
void init_option_sprite(my_defender_t *d);
void fps_events(my_defender_t *d);
void fps_move(my_defender_t *d);
void init_mob(my_defender_t *d);
void set_start_position(my_defender_t *d);
void monsters_manager(my_defender_t *d);
void option_move(my_defender_t *d);
void sound_events(my_defender_t *d);
void sound_function(my_defender_t *d);
void check_state(my_defender_t *d);
void fps_loop(my_defender_t *d);
void draw_sound_sprite(my_defender_t *d);
void init_menu_button(my_defender_t *d);
void init_coins(my_defender_t *d);
void add_point(my_defender_t *d);
void init_coins_sprite(my_defender_t *d);
void move_rect(sfIntRect *rect, int offset, int max_value);
void coins_sprite(my_defender_t *d);
void init_shop(my_defender_t *d);
void draw_background(my_defender_t *d);
void init_pause_button(my_defender_t *d);
void clear_struct(my_defender_t *d);
void pause_events(my_defender_t *d);
void pause_loop(my_defender_t *d);
void sound_loop(my_defender_t *d);
void fps_loop(my_defender_t *d);
void option_loop(my_defender_t *d);
void init_life(my_defender_t *d);
void check_pos_mob(my_defender_t *d);
void move_rect_life(sfIntRect *rect, int offset, int max_value);
void init_slot_tower(my_defender_t *d);
void init_tower(my_defender_t *d);
void spawn_tower(my_defender_t *d);
void spawn_other_tower(my_defender_t *d);

#endif /* !MY_DEFENDER */
