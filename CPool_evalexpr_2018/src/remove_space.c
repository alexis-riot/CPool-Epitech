/*
** EPITECH PROJECT, 2018
** remove_space
** File description:
** Remove all space in string
*/

#include "my.h"
#include "eval_expr.h"

char *remove_space(char *str)
{
	int	j = 0;
	char *new_str;

	new_str = malloc(my_strlen(str) * 2);

	for (int i = 0; str[i]; i++) {
		if (str[i] == ' ')
			continue;

		new_str[j] = str[i];
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}
