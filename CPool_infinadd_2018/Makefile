##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Automatic compilation
##

NAME = 		infin_add

SRC =		infin_add.c\
			src/add.c\
			src/check_sign.c\
			src/display_result.c\
			src/less.c\
			src/remove_spchar.c\
			src/send_calcul.c\
			src/send_error.c

OBJ =		$(SRC:.c=.o)

all:		$(NAME)

$(NAME): 	$(OBJ)
			make -C lib/my/ && make clean -C lib/my/
			gcc $(OBJ) -o $(NAME) -L. lib/libmy.a

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
