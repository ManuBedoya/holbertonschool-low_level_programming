#include "holberton.h"
#include <stdlib.h>

/**
 **create_array - Create a dinamic array
 *@size: Size of Array
 *@c: Inicializate all with c character
 *Return: Array
 */

char *create_array(unsigned int size, char c)
{
	if (size <= 0)
		return ('\0');

	char *s;
	unsigned int i = 0;

	s = (char *) malloc(size * sizeof(char));

	if (s == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
