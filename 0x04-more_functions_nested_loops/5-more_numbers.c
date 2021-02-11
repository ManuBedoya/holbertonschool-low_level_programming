#include "holberton.h"

/**
 *more_numbers - print numbers from 0 to 14
 *
 *
 */
void more_numbers(void)
{
	int a;
	int tenTimes = 0;

	while (tenTimes <= 10)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a <= 9)
				_putchar(a + '0');
			else
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
		}
	_putchar('\n');
	tenTimes++;
	}
}
