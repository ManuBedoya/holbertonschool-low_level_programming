#include "holberton.h"

/**
 *print_triangle - print a numbers from 0 to 100 and push fizz buszz or *fizzbuszz
 *@size: size
 *
 */
void print_triangle(int size)
{
	int i;
	int j;
	int stop = size;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j >= stop - 1)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
		stop--;
	}

}