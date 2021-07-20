/*
** EPITECH PROJECT, 2021
** mysokoban
** File description:
** main
*/

#include <ncurses.h>
#include "my_window.h"
#include "read.h"
#include <stdlib.h>

int main(int ac, char **av)
{
    char *buff = NULL;
    char **map = NULL;

    if (ac != 2)
        return (84);
    buff = read_map(av[1]);
    if (buff == NULL)
        return (84);
    map = str_to_tabstr(buff);
    if (map == NULL)
        return (84);
    if ((manage_err(buff)) == 84)
        return (84);
    open_window(map);
    return (0);
}
