##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Automatic compilation
##

NAME := 		calc

INCLUDE :=	-I ./include/

SRC :=		bistro_matic.c\
			src/get_expr.c\
			src/check_base.c\
			src/check_ops.c\
			src/display_help.c\
			src/send_error.c\
			src/convertbase/calcul.c\
			src/convertbase/carac.c\
			src/convertbase/convert.c\
			src/convertbase/size.c\
			src/convertbase/tab.c\
			src/convertbase/val.c\
			src/evalexpr/eval_expr.c\
			src/evalexpr/check_expr.c\
			src/evalexpr/check_operator.c\
			src/evalexpr/do_op.c\
			src/evalexpr/remove_space.c\
			src/evalexpr/send_result.c

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
