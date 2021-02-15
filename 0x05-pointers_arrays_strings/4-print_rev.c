#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Print a string in reverse
 * @s: String
*/
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
		printf("%c", s[i]);
	printf("\n");
}
