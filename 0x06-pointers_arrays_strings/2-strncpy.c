#include "holberton.h"
#include <string.h>
/**
 **_strncpy - Copie a string
 *@dest: Array
 *@src: Array
 *@n: number of elements
 *Return: array
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
