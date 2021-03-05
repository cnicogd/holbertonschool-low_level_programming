#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - free 2d arr
 * @grid: 2d arr
 * @height: hg of the arr.
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
