/*
** EPITECH PROJECT, 2022
** Solo Stumper
** File description:
** str to word array 
*/

#include <stdio.h>
#include <stdlib.h>

static int count_words(char *str, char delim)
{
    int i = 0;
    int words = 0;

    while (str[i] != '\0') {
        if (str[i] == delim) {
            words++;
        }
        i++;
    }
    return words + 1;
}

static int len_word(char *str, int pos, char delim)
{
    int i = 0;

    while (str[pos] != '\0') {
        if (str[pos] == delim) {
            return i;
        }
        i++;
        pos++;
    }
    return i;
}

char **my_str_to_array(char *str, char delim)
{
    int words = count_words(str, delim);
    char **tab = malloc(sizeof(char *) * (words + 1));
    int i = 0;
    int j = 0;
    int pos = 0;

    for (; i < words; i++) {
        tab[i] = malloc(sizeof(char) * (len_word(str, pos, delim) + 2));
        for (; str[pos] != delim && str[pos] != '\0'; j++, pos++) {
            tab[i][j] = str[pos];
        }
        tab[i][j] = '\n';
        tab[i][j + 1] = '\0';
        j = 0;
        pos++;
    }
    tab[words] = NULL;
    return tab;
}
