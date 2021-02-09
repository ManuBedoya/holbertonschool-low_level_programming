#include "holberton.h"
#include <stdio.h>

/**
 *print_times_table - print a patron numeric
 *
 *Return: void
 */
void print_times_table(int n)
{
	int a;
	int b = 0;

	if (n >= 0 && n <= 15)
	{
		while (b <= n)
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
					int a = result / 10;
					int b = result % 10;
					_putchar(a + '0');
					_putchar(b + '0');
				}
				else if (result >= 100)
				{
					int tmp = result / 10;
					_putchar(tmp / 10 + '0');
					_putchar(tmp % 10 + '0');
					_putchar((result % 10) + '0');
				}
				else
					_putchar(result + '0');
			}
			b++;
			_putchar('\n');
		}
	}
}
