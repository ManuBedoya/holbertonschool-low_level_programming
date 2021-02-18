#include "holberton.h"
#include <string.h>
/**
 *_strcmp - Compares 2 Strings
 *@s1: String
 *@s2: String
 * Return: 0 if are the same or negative or positive otherwise.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; (s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'); i++)
		;
	return (s1[i] - s2[i]);
}
