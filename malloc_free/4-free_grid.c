#include <stdlib.h>

/**
 * free_grid - Libère la mémoire d'une grille 2D allouée par alloc_grid
 * @grid: Pointeur vers la grille à libérer
 * @height: Hauteur de la grille (nombre de lignes)
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

