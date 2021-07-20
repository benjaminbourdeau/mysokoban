/*
** EPITECH PROJECT, 2021
** mysokoban
** File description:
** get_T_pos
*/

#include <stdlib.h>

int get_p_pos_x(char *map)
{
    int x = 0;

    while (map[x] != '\0') {
        if (map[x] == 'P')
            return (x);
        x++;
    }
    return (0);
}

int get_p_pos(char **map, int *x, int *y)
{
    while (map[*y] != NULL) {
        *x = get_p_pos_x(map[*y]);
        if (*x != 0)
            return (0);
        (*y) += 1;
    }
    return (-1);
}
