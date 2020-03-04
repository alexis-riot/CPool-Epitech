/*
** EPITECH PROJECT, 2018
** tree.c
** File description:
** Display a tree based on it's given size
*/

void my_putchar(char c);

void tree(int size)
{
    int actualLine = 1;
    int line_size = 4; // On commence par 1 bloc de 4 lignes. Puis +1 à chaque bloc.

	for(int i = 0; i < size; i++)
	{
		actualLine = createPart_tree(size, line_size+i, actualLine);
		actualLine -= 4;
	}

	createEnd_tree(5);
}

int createPart_tree(int size, int line_size, int start_size)
{
	int linetree_size = start_size;

    //printf("size: %d\n", line_size);
	for(int i = 0; i < line_size; i++)
	{
		createLine_tree(linetree_size);
		linetree_size += 2;
	}
	return linetree_size;
}

void createLine_tree(int size)
{
	for(int i = 0; i < size; i++)
	{
		my_putchar('*');
	}
	my_putchar('\n');
}

void createEnd_tree(int size)
{
	for(int width = 0; width < size; width++)
	{
		for(int height = 0; height < size; height++)
		{
			my_putchar('|');
		}
		my_putchar('\n');
	}
}
