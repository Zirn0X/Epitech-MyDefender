/*
** EPITECH PROJECT, 2021
** My lib
** File description:
** My strncmp
*/

int my_strncmp(char const *s1, char const *s2, int nb)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && i < nb) {
        if (s1[i] < s2[i])
            return (-1);
        if (s1[i] > s2[i])
            return (1);
        i = i + 1;
    }
    return 0;
}
