#include "holberton.h"

/**
 *print_alphabet - print the alphabet in lowerCase
 *
 *Return: void
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
