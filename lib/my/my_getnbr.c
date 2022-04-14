/*
** EPITECH PROJECT, 2022
** My lib
** File description:
** Get nbr
*/

static int check_car(char c)
{
    if (c >= '0' && c <= '9')
        return 0;
    return 1;
}

int my_get_nbr(char *str)
{
    int nb = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (check_car(str[i]) == 0) {
            nb = nb * 10 + (str[i] - '0');
        } else {
            return 84;
        }
    }
    return nb;
}