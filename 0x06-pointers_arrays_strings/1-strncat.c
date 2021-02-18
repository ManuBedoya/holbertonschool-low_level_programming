#include "holberton.h"

/**
 **_strncat - Concatenate 2 Strings
 *@dest: Array
 *@src: Array
 *@n: Limit
 * Return: array with the 2 strings concataned
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
