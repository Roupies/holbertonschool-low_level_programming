#include <stdlib.h>

/**
 * alloc_grid - Alloue une grille 2D d'entiers initialisés à 0
 * @width: Largeur de la grille
 * @height: Hauteur de la grille
 *
 * Return: Pointeur vers la grille allouée, NULL en cas d'échec
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}

