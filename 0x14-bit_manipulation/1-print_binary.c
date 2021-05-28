#include "holberton.h"
/**
 * _pow - return pow with base 2
 * @expo: Exponent
 * Return: the pow of the number 2 whit exponent expo
*/

/**
 * print_binary - calculate from decumal to binary
 * @n: Decimal
 * Return: Binary
*/
void print_binary(unsigned long int n)
{
	unsigned long int tmp = 0;
	int i;

	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
	{
		while (n >> tmp != 0 && tmp < 64)
			tmp++;
		if (n >> tmp == n)
		{
			_putchar('1');
			for (i = (tmp - 1); i >= 0 ; i--)
			{
				_putchar('0');
			}
		}
		else
		{
			for (i = (tmp - 1); i >= 0; i--)
			{
				if (n >> i & 1)
				{
					_putchar('1');
				}
				else
					_putchar('0');
			}
		}
	}
}

