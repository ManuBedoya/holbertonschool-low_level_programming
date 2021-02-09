#include <stdlib.h>
#include "holberton.h"

/**
 *print_last_digit - search the last digit of the number
 *@r: number
 *
 *Return: Last digit of the number
 */
int print_last_digit(int r)
{
	int x;

	x = abs(r);
	x = x % 10;
	_putchar(x + '0');
	return (x);
}
