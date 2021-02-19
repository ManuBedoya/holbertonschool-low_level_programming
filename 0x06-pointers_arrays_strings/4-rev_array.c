#include "holberton.h"

/**
 * reverse_array - Reverse the array
 *
 * @a: array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int aux;

	for (i = 0; j != i; i++, j--)
	{
		aux = a[i];
		a[i] = a[j];
		a[j] = aux;
	}
}
