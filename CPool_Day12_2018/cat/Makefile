##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Automatic compilation
##

NAME = 		cat

SRC =		cat.c

OBJ =		$(SRC:.c=.o)

all:		$(NAME)

$(NAME): 	$(OBJ)
			gcc $(OBJ) -o $(NAME) -L. lib/libmy.a

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
