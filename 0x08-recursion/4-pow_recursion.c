#include "holberton.h"

/**
 *_pow_recursion - x pow y
 *@x: Base Number
 *@y: Exponent Number
 *Return: x pow y
 */
int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	else if (y == 0)
		return (1);
	else if (y < 1)
		return (-1);
	if (x == 0)
		return (0);
	return (x * _pow_recursion(x, y - 1));
}
