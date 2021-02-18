#include "holberton.h"

/**
 **rot13 - Encode with rot13
 *
 * @c: Array
 * Return: Array encode
 */
char *rot13(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			int positionLetter = c[i] - 97;
			int enocodeLetter = (positionLetter + 13) % 26;

			c[i] = enocodeLetter + 97;
		}
		else if (c[i] >= 'A' && c[i] <= 'Z')
		{
			int positionLetter = c[i] - 65;
			int enocodeLetter = (positionLetter + 13) % 26;

			c[i] = enocodeLetter + 65;
		}
	}
	return (c);
}
