#include "holberton.h"

/**
 **leet - Replace any Letter for numbers
 *@c: Array
 *
 *Return: Array
 */

char *leet(char *c)
{
	int i;
	char encode[109];

	encode[97] = '4';
	encode[65] = '4';
	encode[101] = '3';
	encode[69] = '3';
	encode[111] = '0';
	encode[79] = '0';
	encode[116] = '7';
	encode[84] = '7';
	encode[108] = '1';
	encode[76] = '1';

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == 'a' || c[i] == 'A' || c[i] == 'e' ||
		    c[i] == 'E' || c[i] == 'o' || c[i] == 'O' ||
		    c[i] == 't' || c[i] == 'T' || c[i] == 'l' ||
		    c[i] == 'L')
		{
			int cast = c[i];

			c[i] = encode[cast];
		}
	}
	return (c);
}
