/*
** EPITECH PROJECT, 2021
** mysokoban
** File description:
** manage_err
*/

int manage_err(char *map)
{
    int o = 0;
    int x = 0;
    int p = 0;

    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] != 'P' && map[i] != 'O' && map[i] != ' ' && map[i] != '#' &&
            map[i] != '\n' && map[i] != 'X') {
            return (84);
        }
        if (map[i] == 'O')
            o += 1;
        if (map[i] == 'X')
            x += 1;
        if (map[i] == 'P')
            p += 1;
    }
    if (x < o || p >= 2)
        return (84);
    return (0);
}
