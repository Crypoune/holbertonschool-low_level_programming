#include "main.h"
#include <stdlib.h>

/**
 * free_grid - libère une grille 2D précédemment allouée par alloc_grid
 * @grid: pointeur vers la grille
 * @height: nombre de lignes de la grille
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
