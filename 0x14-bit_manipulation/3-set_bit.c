#include "holberton.h"
/**
 * _pow - return pow with base 2
 * @expo: Exponent
 * Return: the pow of the number 2 whit exponent expo
*/
unsigned long int _pow(int expo)
{
	int i = 0, result = 1;

	if (expo == 0)
		return (1);
	for (i = 0; i < expo; i++)
	{
		result = result * 2;
	}
	return (result);
}
/**
 * set_bit - change a bit
 * @n: pointer to Decimal
 * @index: positii¿on t  to change
 * Return: Binary
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp = 0, sum = 0;
	int i;

	if (*n == 0 && index == 0)
	{
		*n = 1;
		return (1);
	}
	if (*n == 0)
	{
		*n = _pow(index);
		return (1);
	}

	while (_pow(tmp) < *n)
		tmp++;
	for (i = tmp; i >= 0; i--)
	{
		if (sum + _pow(i) <= *n)
		{
			sum += _pow(i);
		}
		else
		{
			if (i == (int) index)
			{
				sum += _pow(i);
			}
		}
	}
	*n = sum;
	if (tmp < index)
		return (-1);
	return (1);
}
