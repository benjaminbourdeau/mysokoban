/*
** EPITECH PROJECT, 2021
** mysokoban
** File description:
** print_back_holes
*/

#include <stdlib.h>
#include "game_action.h"

int print_back_holes(int **O_pos, char **map)
{
    int x = 0;
    int y = 0;

    for (int i = 0; O_pos[i] != NULL; i++) {
        x = O_pos[i][0];
        y = O_pos[i][1];
        if (map[y][x] == ' ')
            map[y][x] = 'O';
    }
    return (0);
}
