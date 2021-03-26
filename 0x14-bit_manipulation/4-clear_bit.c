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
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp = 0, sum = 0, aux;
	int i;

	if (*n == 0 )
	{
		*n = 0;
		return (1);
	}

	while (_pow(tmp) < *n)
		tmp++;
	for (i = tmp; i >= 0; i--)
	{
		if (sum + _pow(i) <= *n)
		{
			if (i == (int) index)
				aux = _pow(i);
			sum += _pow(i);
		}
	}
	*n = sum - aux;
	if (tmp < index)
		return (-1);
	return (1);
}
