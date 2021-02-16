#include "holberton.h"
#include <stdio.h>

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
 * _puts - Print a string
 * @str: String
*/
void _puts(char *str)
{
	int i;

	for (i = 0; i < calculateLenght(str); i++)
		_putchar(str[i]);
	_putchar('\n');
}
