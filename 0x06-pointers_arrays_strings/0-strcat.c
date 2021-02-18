#include "holberton.h"

/**
 * *_strcat - concatenates 2 strings
 * @src: String
 * @dest: String
 *
 * Return: String concatanate
 *
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i]; i++)
		;

	for (j = 0; src[j]; j++, i++)
		dest[i] = src[j];
	return (dest);
}
