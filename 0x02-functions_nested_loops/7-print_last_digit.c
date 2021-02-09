#include "holberton.h"

/**
 *print_last_digit - search the last digit of the number
 *@r: number
 *
 *Return: Last digit of the number
 */
int print_last_digit(int r)
{
	int x = r;

	x = x % 10;
	if (x < 0)
		x = x * -1;
	_putchar(x + '0');
	return (x);
}
