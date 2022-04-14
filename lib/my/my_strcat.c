/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** Function that concatenates two strings
*/

#include "../../includes/my.h"
#include <stdlib.h>

char *my_strcat(char *dest, char *src)
{
    int k = 0;
    int res = my_strlen(dest) + my_strlen(src);
    char *result = malloc(sizeof(char) * res + 1);

    for (int i = 0; dest[i] != '\0'; i++, k++)
        result[k] = dest[i];
    for (int i = 0; src[i] != '\0'; i++, k++)
        result[k] = src[i];

    result[res] = '\0';

    return (result);
}
