#include "holberton.h"

/**
 *times_table - print a patron numeric
 *
 *Return: void
 */
void times_table(void)
{
	int a;
	int n = 0;

	while (n < 10)
	{
		for (a = 0; a <= 9 ; a++)
		{
			int result = a * n;

			if (a != 0)
			{
			_putchar(44);
			_putchar(32);
			if (result < 10)
				_putchar(32);
			}
			if (result >= 10)
			{
				int a = result / 10;
				int b = result % 10;

				_putchar(a + '0');
				_putchar(b + '0');
			}
			else
				_putchar(result + '0');
		}
		n++;
		_putchar('\n');
	}
}
