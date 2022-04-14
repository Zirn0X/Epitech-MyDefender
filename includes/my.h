/*
** EPITECH PROJECT, 2022
** My Sokoban
** File description:
** Header file libs
*/

#ifndef MY_H
    #define MY_H

void my_putchar(char);
int my_strlen(char *str);
void my_putstr(char *);
char **my_str_to_array(char *str, char delim);
char *my_strcat(char *dest, char *src);
int my_strncmp(char const *s1, char const *s2, int nb);
int my_strcmp(char *s1, char *s2);
void my_put_error(char *str);
void my_revstr(char *str);
int my_getnbr(char *);
char *itoa(int nb);

#endif /* !MY_H */
