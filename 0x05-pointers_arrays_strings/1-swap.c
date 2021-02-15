#include "holberton.h"

/**
 * swap_int - swap values of 2 integers
 * @a: integer
 * @b: Integer
*/
void swap_int(int *a, int *b)
{
	int aux = *a;

	*a = *b;
	*b = aux;
}
