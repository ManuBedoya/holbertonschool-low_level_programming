#include "holberton.h"
#include <stdlib.h>

/**
 *free_grid - Clean
 *@grid: array Bidimensional
 *@height: height
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
}
