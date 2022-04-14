##
## EPITECH PROJECT, 2022
## My Defender
## File description:
## Makefile
##

SRC =	src/main.c				\
	src/my_defender.c			\
	src/events/analyse_event.c		\
	src/events/fps_event.c		\
	src/events/manage_event.c		\
	src/events/option_event.c		\
	src/events/pause_event.c	\
	src/events/sound_event.c		\
	src/game/background.c		\
	src/menu/sound/sound.c			\
	src/window/main_window.c		\
	src/window/start_menu.c	\
	src/game/monsters_manager.c	\
	src/game/text/score_manager.c	\
	src/game/score.c	\
	src/clear_struct.c	\
	src/game/life/check_pos_mob.c	\
	src/game/tower/slot_tower.c	\
	src/game/shop/shop_manager.c

SRC_LOOP = 	src/loops/check_loop.c	\
			src/loops/pause_loop.c	\
			src/loops/sound_loop.c	\
			src/loops/fps_loop.c	\
			src/loops/option_loop.c	\
			src/loops/game_loop.c

SRC_INIT = 	src/init/init_background.c	\
			src/init/init_button.c		\
			src/init/init_fps.c		\
			src/init/init_option.c		\
			src/init/init_pause.c		\
			src/init/init_mob.c	\
			src/init/init_sound.c		\
			src/init/init_shop.c	\
			src/init/init_life.c	\
			src/init/init_tower.c

OBJ = $(SRC:.c=.o)

OBJ_LOOP = $(SRC_LOOP:.c=.o)

OBJ_INIT = $(SRC_INIT:.c=.o)

NAME = my_defender

CFLAGS =  -Wall -Wextra

CPPFLAGS =	-Llib -lmy -I includes

CSFML_FLAGS = -lcsfml-graphics -lcsfml-system -lcsfml-audio

all:	$(OBJ) $(OBJ_LOOP) $(OBJ_INIT) build_lib
		gcc -o $(NAME) $(OBJ) $(OBJ_LOOP) $(OBJ_INIT) $(MAIN) $(CSFML_FLAGS) $(CPPFLAGS) $(CFLAGS)

clean:
		rm -f *.o
		rm -f *~
		rm -f #*#
		rm -f *.gcda
		rm -f *.gcno

fclean:	clean
		rm -f $(OBJ)
		rm -f $(OBJ_INIT)
		rm -f $(OBJ_LOOP)
		rm -f $(NAME)
		make fclean -C lib/

build_lib:	$(OBJ_LIB)
			make -C lib/

re:		fclean all

unzip:	unzip -

.PHONY: all clean fclean build_lib re
