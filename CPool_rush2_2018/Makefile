##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## 
##

SRC	=	include/count_occurences.c\
			include/get_frequency.c\
			include/get_length.c\
			include/transf_lowcase.c\
			rush2.c\
		include/my_putchar.c\
		include/my_put_nbr.c\
		include/my_putstr.c\
		include/my_strlen.c

OBJ	=	$(SRC:.c=.o)

NAME	=	lib/my/libmy.a

HEADER	=	include/my.h	\
		include/rush.h

all:	$(NAME)
	gcc $(SRC) lib/my/libmy.a

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
