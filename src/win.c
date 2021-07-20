/*
** EPITECH PROJECT, 2021
** mysokoban
** File description:
** win
*/

#include <stdlib.h>

int is_win(char **map, int **O_pos)
{
    int x = 0;
    int y = 0;
    int i = 0;
    int nbr = 0;

    while (O_pos[i] != NULL) {
        x = O_pos[i][0];
        y = O_pos[i][1];
        if (map[y][x] == 'X')
            nbr += 1;
        i++;
    }
    if (nbr == i)
        return (1);
    return (0);
}
