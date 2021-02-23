#include "holberton.h"

/**
 **_strchr - Start With have an ocurrence netween s and c
 *@s: String
 *@c: Character
 *Return: Return 0 or the pointer
 */
char *_strchr(char *s, char c)
{

	for (; s[0] != '\0'; s++)
	{
		if (s[0] == c)
			return (s);
	}
	return ('\0');
}
