#include "holberton.h"
#include <stdlib.h>

/**
 ***alloc_grid - Create a bidimensional array
 *@width: widht
 *@height: height
 *Return: reuturn array bidimensional
 */

int **alloc_grid(int width, int height)
{

	int **s;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(width * sizeof(int *));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
		s[i] = malloc(height * sizeof(int));

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
