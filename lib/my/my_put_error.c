/*
** EPITECH PROJECT, 2022
** My lib
** File description:
** Puterror
*/

#include "../../includes/my.h"
#include <unistd.h>

void my_put_error(char *str)
{
    write(2, str, my_strlen(str));
}
