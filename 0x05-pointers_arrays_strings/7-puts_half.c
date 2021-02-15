#include "holberton.h"
#include <string.h>

/**
 * puts_half - Print the half string
 * @str: String
*/
void puts_half(char *str)
{
	int i;
	int count = strlen(str);
	int start = count / 2;

	if (count % 2 != 0)
	{
		start = (count - 1) / 2;
	}

	for (i = start; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
