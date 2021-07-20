/*
** EPITECH PROJECT, 2021
** mysokoban
** File description:
** from_str_to_tabstr
*/

#include <stdlib.h>

int get_nbr_line(char *str)
{
    int nbr_line = 0;

    for (int y = 0; str[y] != '\0'; y++) {
        if (str[y] == '\n')
            nbr_line += 1;
    }
    return (nbr_line);
}

int get_line_lenght(char *str)
{
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        i += 1;
    }
    return (i);
}

char *my_strdup_to_char(char *str, char end)
{
    int i = 0;
    char *dup = malloc(sizeof(char) * get_line_lenght(str) + 1);

    while (str[i] != end) {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

char **str_to_tabstr(char *str)
{
    int i = -1;
    int y = 0;
    int nbr_line = get_nbr_line(str);
    char **tabstr = malloc(sizeof(char *) * (nbr_line + 1));

    while (y < nbr_line) {
        tabstr[y] = my_strdup_to_char(&str[i + 1], '\n');
        i += 1;
        while (str[i] != '\0' && str[i] != '\n') {
            i += 1;
        }
        y += 1;
    }
    tabstr[y] = NULL;
    return (tabstr);
}
