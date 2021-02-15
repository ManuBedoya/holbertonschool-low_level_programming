#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strcpy - Copie a pointer to another ponter
 * @dest: destinity
 * @src: Origen
 * Return: character
*/
char *_strcpy(char *dest, char *src)
{
	unsigned int i;

	while (i < strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
