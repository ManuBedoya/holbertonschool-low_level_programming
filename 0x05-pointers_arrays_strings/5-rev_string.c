#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - Reverses a String
 * @s: String
*/
void rev_string(char *s)
{
	int i;
	int j = 0;
	char s1[10];

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		s1[j] = s[i];
		j++;
	}

	for (i = 0; i < 9; i++)
	{
		*(s + i) = s1[i];
	}
}
