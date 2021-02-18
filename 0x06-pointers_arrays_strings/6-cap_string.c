#include "holberton.h"

/**
 **cap_string - Change to UpperCase Capatalize
 *
 *@c: Array
 *Return: Array
 */

char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i + 1] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			if (i == 0)
				c[i] -= 32;
			else if (c[i - 1] == ' ' || c[i - 1] == '\n' ||
					 c[i - 1] == '\t' || c[i - 1] == ',' ||
					 c[i - 1] == ';' || c[i - 1] == '.' ||
					 c[i - 1] == '!' || c[i - 1] == '?' ||
					 c[i - 1] == 34 || c[i - 1] == ')' ||
					 c[i - 1] == '(' || c[i - 1] == '{' ||
					 c[i - 1] == '}')
				c[i] -= 32;
		}
	}
	return (c);
}
