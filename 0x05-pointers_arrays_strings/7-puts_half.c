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
 * puts_half - Print the half string
 * @str: String
*/
void puts_half(char *str)
{
	int i;
	int count = calculateLenght(str);
	int start = count / 2;

	if (count % 2 != 0)
		start = (count - 1) / 2;

	for (i = start + 1; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
