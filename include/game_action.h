/*
** EPITECH PROJECT, 2021
** mysokoban
** File description:
** game_action
*/

#ifndef GAME_ACTION_H_
#define GAME_ACTION_H_

int get_p_pos_x(char *map);
void get_p_pos(char **map, int *x, int *y);
int is_game_action(char **map, int **O_pos);
int move_player(char **map, int xp, int yp);
int move_boxes_left(char **map, int x, int y);
int move_boxes_right(char **map, int x, int y);
int move_boxes_up(char **map, int x, int y);
int move_boxes_down(char **map, int x, int y);
int **get_all_o_pos(char **map);
int print_back_holes(int **O_pos, char **map);
int is_win(char **map, int **O_pos);

#endif /* GAME_ACTION_H_ */

