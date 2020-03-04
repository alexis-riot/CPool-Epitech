##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Automatic compilation
##

NAME := 		eval_expr

INCLUDE :=	-I ./include/

SRC :=		eval_expr.c\
			src/check_expr.c\
			src/check_operator.c\
			src/do_op.c\
			src/send_result.c\
			src/send_error.c\
			src/remove_space.c

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
