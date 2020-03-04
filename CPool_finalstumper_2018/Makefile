##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Automatic compilation
##

NAME := 	rush3

INCLUDE :=	-I ./include/

SRC :=		main.c			\
		src/rush3.c		\
		src/compare.c		\
		src/send_error.c

OBJ :=		$(SRC:.c=.o)

LIB :=		-L ./lib/my/ -l my

CFLAGS := 	-Wall -Wextra -g $(INCLUDE)

all:		$(NAME)

lib:
			make -C ./lib/my/ all

$(NAME): 	lib $(OBJ)
			gcc -o $(NAME) $(OBJ) -L ./lib/my/ -l my


clean:
			make -C lib/my/ clean
			rm -rf $(OBJ)

fclean:		clean
			make -C lib/my/ fclean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all lib clean fclean re
