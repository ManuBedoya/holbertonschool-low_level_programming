#include <stdlib.h>
#include "holberton.h"

/**
 *print_last_digit - search the last digit of the number
 *@n: number
 *
 *Return: Last digit of the number
 */
int print_last_digit(int n)
{
	n = abs(n);
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
