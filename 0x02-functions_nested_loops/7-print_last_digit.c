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
	r = abs(r);
	r = r % 10;
	_putchar(r + '0');
	return (r);
}
