#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 *alloc_grid - Pointer to a 2D ARR
 * @width: WIDTH OF 2d arr
 * @height: height of 2d arr
 *
 * Return:  Always 0
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **buffer;

	if (width <= 0 || height <= 0)
		return (NULL);

	buffer = (int **)malloc(sizeof(int *) * height);
		if (buffer == NULL)
		return (NULL);

		for (i = 0; i < height; i++)
			{
			buffer[i] = (int *)malloc(width * sizeof(int));
			if (buffer[i] == NULL)
			{
				for (i--; i >= 0; i--)
					free(buffer[i]);
				free(buffer);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				*(*(buffer + i) + j) = 0;
		}
		return (buffer);
}
