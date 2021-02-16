#include "holberton.h"

/**
 *calculateLenght - Calculate number of strings
 * @s: String
 * Return: the length of the number!!
*/

int calculateLenght(char *s)
{
	int count = 0;

	while (s[count] != 0)
		count++;
	return (count);
}

/**
 * *_strcpy - Copie a pointer to another ponter
 * @dest: destinity
 * @src: Origen
 * Return: character
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i < calculateLenght(src))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
