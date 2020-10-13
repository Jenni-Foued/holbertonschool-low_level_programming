#include "holberton.h"
#include <stdlib.h>

/**
 *alloc_grid - allocate a multidimensional array.
 *@width: array's width.
 *@height: array's height.
 *Return: pointer to array.
 */

int **alloc_grid(int width, int height)
{
	int **grid, w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}
	return (grid);
}
