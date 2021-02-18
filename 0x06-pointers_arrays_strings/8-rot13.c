#include "holberton.h"

/**
 **rot13 - Encode with rot13
 *
 * @c: Array
 * Return: Array encode
 */
char *rot13(char *c)
{
	int i = 0;
	int j = 0;

	while (c[i] != '\0')
	{
back:
	if (((c[i] < 'a' || c[i] > 'z') && (c[i] < 'A' || c[i] > 'Z')))
	{
		i++;
		goto back;
		}
		else
		{
			for (; c[i] >= 'a' && c[i] <= 'z' && j != 1; j--)
			{
				int positionLetter = c[i] - 97;

				c[i] = ((positionLetter + 13) % 26) + 97;
				i++;
				goto back;
			}
			int positionLetter = c[i] - 65;

			c[i] = ((positionLetter + 13) % 26) + 65;
			i++;
		}
	}
	return (c);
}
