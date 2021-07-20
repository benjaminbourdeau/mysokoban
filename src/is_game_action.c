/*
** EPITECH PROJECT, 2021
** mysokoban
** File description:
** is_game_action
*/

#include <ncurses.h>
#include "game_action.h"

int is_game_action(char **map, int **O_pos)
{
    int x = 0;
    int y = 0;

    get_p_pos(map, &x, &y);
    move_player(map, x, y);
    print_back_holes(O_pos, map);
    return (0);
}
