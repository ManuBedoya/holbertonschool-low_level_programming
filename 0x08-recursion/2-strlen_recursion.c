#include "holberton.h"

/**
 *_strlen_recursion - length of String
 *@s: String
 *Return: lenght
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
		return (0);
}
