#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create an array
 *@c: the characters
 *@size: the size of characters
 *Return: reyturn 0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return ('\0');
	p = malloc(sizeof(char) * size);
	if (p == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
