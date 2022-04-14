##
## EPITECH PROJECT, 2021
## Lib
## File description:
## Makefile
##

SRC_LIB =	my/my_putchar.c	\
			my/my_putstr.c	\
			my/my_strcmp.c	\
			my/my_str_to_word_array.c	\
			my/my_strlen.c	\
			my/my_strncmp.c	\
			my/my_strcat.c	\
			my/my_put_error.c	\
			my/my_revstr.c	\
			my/my_int_to_ascii.c

OBJ_LIB = $(SRC_LIB:.c=.o)

NAME = libmy.a

CC = gcc

CPPFLAGS =	-Llib/my -lmy -I../includes

CFLAGS =	 -Wall -Wextra

all:	$(OBJ_LIB)
		ar rc $(NAME) $(OBJ_LIB)

clean:
		rm -f $(OBJ_LIB)
		rm -f *~
		rm -f #*#
		rm -f *.gcda
		rm -f *.gcno

fclean:	clean
		rm -f $(OBJ_LIB)
		rm -f $(NAME)
		rm -f vgcore.*

re:		fclean all
