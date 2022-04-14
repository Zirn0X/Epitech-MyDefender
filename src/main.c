/*
** EPITECH PROJECT, 2022
** My Defender
** File description:
** Main file
*/

#include "my_defender.h"
#include "my.h"

int main(int ac,char *av[])
{
    if (ac == 2 && av[1][1] == 'h')
        usage();
    else
        my_defender();
    return 0;
}

void usage(void)
{
    my_putstr("My Defender created with CSFML.\n\n");
    my_putstr("OPTIONS\n");
    my_putstr("\t\tAll you have to do\n");
    my_putstr("\t\tIs to put the tower on\n");
    my_putstr("\t\tThe grey cases\n");
}
