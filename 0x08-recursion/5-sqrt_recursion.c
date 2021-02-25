#include "holberton.h"

int operation(int original, int nVariety)
{
	if(nVariety == 0)
		return (-1);
	if (nVariety * nVariety == original)
		return (nVariety);
	else
		return operation(original, nVariety - 1);
}


/***/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return operation(n, n / 2);
}
