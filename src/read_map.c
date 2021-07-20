/*
** EPITECH PROJECT, 2021
** mysokoban
** File description:
** read_the_map
*/

#include <stdio.h>
#include "lib.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char *read_map(char *path)
{
    struct stat file_stat;
    char *buff;
    int fd;

    if (stat(path, &file_stat) < 0)
        return (NULL);
    if (file_stat.st_size == 0)
        return (NULL);
    fd = open(path, O_RDONLY);
    buff = malloc(sizeof(char) * (file_stat.st_size + 1));
    buff[file_stat.st_size] = '\0';
    if (fd == -1)
        return (NULL);
    if (read(fd, buff, file_stat.st_size) < 0)
        return (NULL);
    close(fd);
    return (buff);
}
