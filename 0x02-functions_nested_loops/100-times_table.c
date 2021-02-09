#include "holberton.h"
#include <stdio.h>

/**
 *print_times_table - print a patron numeric
 *@n: Number
 *Return: void
 */
void print_times_table(int n)
{
	int a;
	int b = 0;

	if (n >= 0 && n <= 15)
	{
		while (b++ <= n)
		{
			for (a = 0; a <= n ; a++)
			{
				int result = a * b;

				if (a != 0)
				{
					_putchar(44);
					_putchar(32);
					if (result < 10)
					{
						_putchar(32);
						_putchar(32);
					}
					else if (result < 100)
						_putchar(32);
				}
				if (result >= 10 && result < 100)
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result >= 100)
				{
					_putchar((result / 10) / 10 + '0');
					_putchar((result / 10) % 10 + '0');
					_putchar((result % 10) + '0');
				}
				else
					_putchar(result + '0');
			}
			_putchar('\n');
		}
	}
}
