/*
** EPITECH PROJECT, 2021
** My lib
** File description:
** Put_Str
*/

#include "../../includes/my.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}
