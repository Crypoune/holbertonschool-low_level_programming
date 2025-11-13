#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to the 2D array, or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = calloc(height, sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = calloc(width, sizeof(int));
		if (grid[h] == NULL)
		{
			while (h-- > 0)
				free(grid[h]);
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
