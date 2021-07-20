/*
** EPITECH PROJECT, 2021
** mysokoban
** File description:
** move_boxes_with_player
*/

int move_boxes_left(char **map, int x, int y)
{
    if (map[y][x - 1] == 'X' && map[y][x - 2] != '#' && map[y][x - 2] != 'X') {
        map[y][x - 2] = 'X';
        map[y][x - 1] = 'P';
    }
    if (map[y][x - 1] == 'X' && map[y][x - 2] == '#')
        return (-1);
    if (map[y][x - 1] == 'X' && map[y][x - 2] == 'X')
        return (-1);
    if (map[y][x - 1] == '#')
        return (-2);
    return (0);
}

int move_boxes_right(char **map, int x, int y)
{
    if (map[y][x + 1] == 'X' && map[y][x + 2] != '#' && map[y][x + 2] != 'X') {
        map[y][x + 2] = 'X';
        map[y][x + 1] = 'P';
    }
    if (map[y][x + 1] == 'X' && map[y][x + 2] == '#')
        return (-1);
    if (map[y][x + 1] == 'X' && map[y][x + 2] == 'X')
        return (-1);
    if (map[y][x + 1] == '#')
        return (-2);
    return (0);
}

int move_boxes_up(char **map, int x, int y)
{
    if (map[y - 1][x] == 'X' && map[y - 2][x] != '#' && map[y - 2][x] != 'X') {
        map[y - 2][x] = 'X';
        map[y - 1][x] = 'P';
    }
    if (map[y - 1][x] == 'X' && map[y - 2][x] == '#')
        return (-1);
    if (map[y - 1][x] == 'X' && map[y - 2][x] == 'X')
        return (-1);
    if (map[y - 1][x] == '#')
        return (-2);
    return (0);
}

int move_boxes_down(char **map, int x, int y)
{
    if (map[y + 1][x] == 'X' && map[y + 2][x] != '#' && map[y + 2][x] != 'X') {
        map[y + 2][x] = 'X';
        map[y + 1][x] = 'P';
    }
    if (map[y + 1][x] == 'X' && map[y + 2][x] == '#')
        return (-1);
    if (map[y + 1][x] == 'X' && map[y + 2][x] == 'X')
        return (-1);
    if (map[y + 1][x] == '#')
        return (-2);
    return (0);
}
