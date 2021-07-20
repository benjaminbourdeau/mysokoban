/*
** EPITECH PROJECT, 2021
** mysokoban
** File description:
** get_all_o_pos
*/

#include <stdlib.h>
#include "game_action.h"

int get_nbr_holes_line(char *map_line)
{
    int count = 0;

    for (int x = 0; map_line[x] != '\0'; x++) {
        if (map_line[x] == 'O')
            count++;
    }
    return (count);
}

int get_nbr_holes(char **map)
{
    int count = 0;

    for (int y = 0; map[y] != NULL; y++)
        count += get_nbr_holes_line(map[y]);
    return (count);
}

int add_tabpos(int *pos, char **map, int x, int y)
{
    if (map[y][x] == 'O') {
        pos[0] = x;
        pos[1] = y;
        return (1);
    }
    return (0);
}

int **get_all_o_pos(char **map)
{
    int i = 0;
    int len_tabpos = get_nbr_holes(map);
    int **tabpos = malloc(sizeof(int *) * (len_tabpos + 1));

    for (int y = 0; map[y] != NULL; y++) {
        for (int x = 0; map[y][x] != '\0'; x++) {
            tabpos[i] = malloc(sizeof(int) * 2);
            i += add_tabpos(tabpos[i], map, x, y);
        }
    }
    tabpos[i] = NULL;
    return (tabpos);
}
