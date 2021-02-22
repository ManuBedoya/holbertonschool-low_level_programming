#include "holberton.h"

/**
 *_strspn - calculate ocurrences
 *
 *@s: a Ponter
 *@accept: The bytes accept
 *Return: number of ocurrences
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ocurrences = 0;
	int i = 0, j = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				ocurrences++;
		}
	}
	return (ocurrences);
}
