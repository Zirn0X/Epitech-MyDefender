/*
** EPITECH PROJECT, 2022
** My lib
** File description:
** Int to ascii
*/

#include <stdlib.h>
#include "my.h"

char *itoa(int nb)
{
    int i = 0;
    char *str = malloc(sizeof(char) * 10);
    int ret = 0;

    if (nb == 0) {
        str[i] = '0';
        str[i++] = '\0';
        return str;
    }
    while (nb != 0) {
        ret = nb % 10;
        str[i] = (ret > 9) ? (ret-10) + 'a' : ret + '0';
        nb = nb/10;
        i++;
    }
    str[i] = '\0';
    my_revstr(str);
    return str;
}
