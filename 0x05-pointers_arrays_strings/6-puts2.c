#include "holberton.h"
#include <stdlib.h>

/**
 * puts2 - print any character wit the first letter
 * @str: String
*/
void puts2(char *str)
{
	int i;

	_putchar(str[0]);
	for (i = 0; i < 5; i++)
		_putchar(i + 5);
	_putchar('\n');
}
