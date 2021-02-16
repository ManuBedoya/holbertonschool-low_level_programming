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
 * print_rev - Print a string in reverse
 * @s: String
*/
void print_rev(char *s)
{
	int i;

	for (i = calculateLenght(s) - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
