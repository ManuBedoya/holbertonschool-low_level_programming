#include "holberton.h"

/**
 **_memcpy - Copies memorie area
 *
 *@dest: Pointer
 *@src: Pointer
 *@n: Limit
 *Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
