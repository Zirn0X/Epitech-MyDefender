/*
** EPITECH PROJECT, 2022
** My lib
** File description:
** Revstr
*/

#include "my.h"

void my_revstr(char *str)
{
    char temp;
    int i = 0;
    int last = my_strlen(str);

    while (i < last) {
        temp = str[last - 1];
        str[last - 1] = str[i];
        str[i] = temp;
        i++;
        last--;
    }
}