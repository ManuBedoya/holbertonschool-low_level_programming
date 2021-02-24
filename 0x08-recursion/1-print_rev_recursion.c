#include "holberton.h"

/***/
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(s[0]);
	}
}
