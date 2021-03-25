#include "holberton.h"

/**
 * print_binary2 - calculate from decimal to binary
 * @n: Number in decimal
*/
void print_binary2(unsigned long int n)
{
	if (n != 0)
	{
		print_binary2(n / 2);
		_putchar(n % 2 + '0');
	}
}
/**
 * print_binary - calculate from decimal to binary
 * @n: Number in decimal
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_binary2(n);
}

