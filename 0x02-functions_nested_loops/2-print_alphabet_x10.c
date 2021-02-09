#include "holberton.h"

/**
 *print_alphabet_x10 - print alphabet x 10
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	int loops = 0;
	int a;

	while (loops++ < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
