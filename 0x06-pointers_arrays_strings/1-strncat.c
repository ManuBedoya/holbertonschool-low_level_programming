#include "holberton.h"

/**
 * 
 * 
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; j < n; j++, i++)
		dest[i] = src[j];
	return (dest);
}