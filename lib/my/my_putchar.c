/*
** EPITECH PROJECT, 2021
** My lib
** File description:
** Putchar
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
