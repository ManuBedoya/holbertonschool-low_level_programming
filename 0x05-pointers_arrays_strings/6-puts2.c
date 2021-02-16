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
 * puts2 - print any character wit the first letter
 * @str: String
*/
void puts2(char *str)
{
	int i;

	for (i = 0; i < calculateLenght(str); i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
