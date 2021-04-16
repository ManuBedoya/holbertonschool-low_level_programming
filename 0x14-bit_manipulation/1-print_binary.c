#include "holberton.h"
/**
 * _pow - return pow with base 2
 * @expo: Exponent
 * Return: the pow of the number 2 whit exponent expo
*/
unsigned long int _pow(int expo)
{
	unsigned long int i = 0, result = 1;

	if (expo == 0)
		return (1);
	for (i = 0; i < expo; i++)
	{
		result = result * 2;
	}
	return (result);
}
/**
 * print_binary - calculate from decumal to binary
 * @n: Decimal
 * Return: Binary
*/
void print_binary(unsigned long int n)
{
	unsigned long int tmp = 0, sum = 0;
	int i;

	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
	{
		while (_pow(tmp) < n)
			tmp++;
		if (_pow(tmp) == n)
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
				if (sum + _pow(i) <= n)
				{
					_putchar('1');
					sum += _pow(i);
				}
				else
					_putchar('0');
			}
		}
	}
}

