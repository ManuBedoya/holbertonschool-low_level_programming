#include "holberton.h"
#include <stdlib.h>

/***/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
}
