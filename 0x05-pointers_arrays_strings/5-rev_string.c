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
 * rev_string - Reverses a String
 * @s: String
*/
void rev_string(char *s)
{
	int i;
	int j = 0;
	int count = calculateLenght(s);
	char s1[1024];

	for (i = count - 1; i >= 0; i--)
	{
		s1[j] = s[i];
		j++;
	}

	for (i = 0; i < count; i++)
	{
		*(s + i) = s1[i];
	}
}
