#include "holberton.h"

/**
 **rot13 - Encode with rot13
 *
 * @c: Array
 * Return: Array encode
 */
char *rot13(char *c)
{
	int i = 0, j = 0;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (c[i])
	{
		for (j = 0; input[j]; j++)
		{
			if (c[i] == input[j])
			{
				c[i] = output[j];
				break;
			}
		}
	i++;
	}
	return (c);
}
