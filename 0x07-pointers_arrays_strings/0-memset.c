#include "holberton.h"

/**
 **_memset - Fills memory with a constant byte
 *@s: Pointer
 *@b: Constant byte
 *@n: Limit
 *Return: Pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			s[i] = b;
	}
	return (s);
}
