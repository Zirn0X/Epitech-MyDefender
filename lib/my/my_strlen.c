/*
** EPITECH PROJECT, 2021
** My lib
** File description:
** My str len
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}
