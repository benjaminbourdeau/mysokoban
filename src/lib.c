/*
** EPITECH PROJECT, 2021
** mysokoban
** File description:
** lib_func
*/

#include <ncurses.h>

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

int my_tabstr_len(char **tabstr)
{
    int i = 0;

    while (tabstr[i] != NULL) {
        i++;
    }
    return (i);
}

int get_linemax(char **tabstr)
{
    int n = 0;
    int size = 0;

    for (int i = 0; tabstr[i] != NULL; i++) {
        n = my_strlen(tabstr[i]);
        if (size <= n)
            size = n;
        n = 0;
    }
    return (size);
}
