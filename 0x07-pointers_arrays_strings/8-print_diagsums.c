#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - Plus the diagonals
 *
 *@a: Array
 *@size: Size
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int valueFirstDiagonal = 0, valueLastDiagonal = 0, limit = 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				valueFirstDiagonal += *(a + ((i * size) + j));
			if ((size - limit) == j)
			{
				valueLastDiagonal += *(a + ((i * size) + j));
				limit++;
			}
		}
	}
	printf("%d, %d\n", valueFirstDiagonal, valueLastDiagonal);
}
