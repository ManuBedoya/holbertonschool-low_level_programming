#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc - allocate memory for an array
 *@nmemb: Number elements
 *@size: Size bytes
 *Return: Array with the memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = calloc(nmemb, size);
	if (p == NULL)
		return (NULL);
	return (p);
}
