##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Automatic compilation
##

NAME = 		do-op

SRC =		do-op.c \
			src/my_add.c\
			src/my_sub.c\
			src/my_mul.c\
			src/my_div.c\
			src/my_mod.c\
			src/do_getnumber.c

OBJ =		$(SRC:.c=.o)

all:		$(NAME)

$(NAME): 	$(OBJ)
			gcc $(OBJ) -o $(NAME) -L. ../lib/libmy.a

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
