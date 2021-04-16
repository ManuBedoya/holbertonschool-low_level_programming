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
 * get_bit - calculate the value of the bit
 * @index: index
 * @n: Number
 * Return: value of the bit in index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp = 0, sum = 0;
	int i;

	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);

		while (_pow(tmp) < n)
			tmp++;
		if (_pow(tmp) == n && tmp == index)
			return (1);
		for (i = tmp; i >= 0; i--)
		{
			if (sum + _pow(i) <= n)
			{
			sum += _pow(i);
			if (i == (int) index)
				return (1);
			}
			if (i == (int) index)
				return (0);
		}
	return (-1);
}
