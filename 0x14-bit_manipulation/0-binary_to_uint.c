#include "holberton.h"
#include <stdio.h>
/**
 * calculateLen - calculate the lenght of string
 * @b: Is a string with the binary
 * Return: the lenght of string
*/
int calculateLen(char *b)
{
	int i;

	for (i = 0; b[i]; i++)
	{}
	return (i);
}

/**
 * binary_to_uint - calculate from binary to decimal
 * @b: Is a string with the binary
 * Return: the number in decimal
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 1, result = 0;
	int i, len;

	if (!b)
		return (0);
	len = calculateLen((char *)b);
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			result += count;
		count *= 2;
	}
	return (result);
}
