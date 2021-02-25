#include "holberton.h"

/**
 *operation - operation of square of a number
 *@original: Number that never change
 *@nVariety: Dinamic Number
 *Return: Square of n
 */
int operation(int original, int nVariety)
{
	if (nVariety == original / 2)
		return (-1);
	if (nVariety * nVariety == original)
		return (nVariety);
	else
		return (operation(original, nVariety + 1));
}


/**
 *_sqrt_recursion - Print square of a number
 *@n: Number
 *Return: Square of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (operation(n, 1));
}
