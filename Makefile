#
## EPITECH PROJECT, 2021
## mysokoban
## File description:
## Makefile
#

SRC_MAIN	=	src/main.c

SRC_TEST	=	src/read_map.c			\
				src/lib.c				\
				src/str_to_tabstr.c		\
				src/open_window.c		\
				src/get_p_pos.c			\
				src/is_game_action.c	\
				src/move_player.c		\
				src/move_boxes.c		\
				src/get_all_o_pos.c		\
				src/print_back_holes.c	\
				src/win.c				\
				src/manage_err.c

SRC			=	$(SRC_TEST) $(SRC_MAIN)

TESTS		=	

CFLAGS		=	-Wall -Wextra

CPPFLAGS	=	-I./include/

OBJ			=	$(SRC:.c=.o)

CC			=	gcc

RM			=	rm -f

NAME		=	my_sokoban

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) -lncurses

all:	$(NAME)

tests_run:
	$(CC) -o unit_tests $(SRC_TEST) $(TESTS) $(CFLAGS) $(CPPFLAGS) -lncurses -lcriterion --coverage
	./unit_tests --verbose

clean:
	$(RM) $(OBJ)
	$(RM) *.gc*
	$(RM) unit_tests

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean
