/*
** EPITECH PROJECT, 2021
** mysokoban
** File description:
** move_player
*/

#include <stdio.h>
#include <ncurses.h>
#include "game_action.h"

void key_up_down(char **map, int c, int x, int y)
{
    int i = 0;

    switch(c) {
        case KEY_UP:
            i = move_boxes_up(map, x, y);
            if (i < 0)
                break;
            map[y][x] = ' ';
            map[y - 1][x] = 'P';
            break;
        case KEY_DOWN:
            i = move_boxes_down(map, x, y);
            if (i < 0)
                break;
            map[y][x] = ' ';
            map[y + 1][x] = 'P';
            break;
    }
}

void key_left_right(char **map, int c, int x, int y)
{
    int i = 0;

    switch(c) {
        case KEY_LEFT:
            i = move_boxes_left(map, x, y);
            if (i < 0)
                break;
            map[y][x] = ' ';
            map[y][x - 1] = 'P';
            break;
        case KEY_RIGHT:
            i = move_boxes_right(map, x, y);
            if (i < 0)
                break;
            map[y][x] = ' ';
            map[y][x + 1] = 'P';
            break;
    }
}

int move_player(char **map, int xp, int yp)
{
    int c = getch();

    key_up_down(map, c, xp, yp);
    key_left_right(map, c, xp, yp);
    return (0);
}
