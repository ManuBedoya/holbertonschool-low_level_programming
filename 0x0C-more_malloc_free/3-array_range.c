#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates array of integers.
 * @min: minimum value it should include.
 * @max: maximum value it should include.
 *
 * Return: NULL on failure or pointer to array.
 */
int *array_range(int min, int max)
{
	int i;
	int size;
	int *p;

	if (min > max)
		return (NULL);
	size = (max - min + 1);
	p = malloc(sizeof(int) * (size));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		memory[index] = min + i;
	return (memory);
}
