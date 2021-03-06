#include "holberton.h"

/**
 *calculateLenght - Calculate number of strings
 * @s: String
 * Return: the length of the number!!
*/

int calculateLenght(char *s)
{
	unsigned int count = 0;

	while (s[count] != 0)
		count++;
	return (count);
}

/**
 * puts_half - Print the half string
 * @str: String
*/
void puts_half(char *str)
{
	unsigned int i;
	unsigned int count = calculateLenght(str);
	unsigned int start = count / 2;

	if (count % 2 != 0)
		start = (count - 1) / 2;

	for (i = start; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
