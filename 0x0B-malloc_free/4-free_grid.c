#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Frees an array
 * @grid: 2d array
 * @height: height of the 2d array.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}