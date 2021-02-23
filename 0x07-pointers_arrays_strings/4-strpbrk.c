#include "holberton.h"

/**
 *_strpbrk - Find Word
 *@s: String
 *@accept: Letter acepted
 *Return: null or string since the word accepted
 */
char *_strpbrk(char *s, char *accept)
{

	int i = 0, j = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}

