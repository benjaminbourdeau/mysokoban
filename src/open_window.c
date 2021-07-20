/*
** EPITECH PROJECT, 2021
** mysokoban
** File description:
** open_window
*/

#include <ncurses.h>
#include "lib.h"
#include "game_action.h"

int open_window(char **map)
{
    int s = get_linemax(map);
    int t = my_tabstr_len(map);
    int **O_pos = get_all_o_pos(map);
    initscr();
    curs_set(0);
    keypad(stdscr, TRUE);
    while (1) {
        clear();
        for (int i = 0; map[i] != NULL; i++) {
            mvprintw((LINES / 2) - (t / 2) + i, (COLS / 2) - (s / 2), map[i]);
        }
        is_game_action(map, O_pos);
        if ((is_win(map, O_pos)) == 1) {
            endwin();
            return (0);
        }
        refresh();
    }
    endwin();
    return (0);
}
