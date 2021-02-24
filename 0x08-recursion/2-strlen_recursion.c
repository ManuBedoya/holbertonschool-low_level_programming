#include "holberton.h"

/**
 *_strlen_recursion - length of String
 *@s: String
 *Return: lenght
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
