#include "holberton.h"

/**
 *_isupper - Determine if the character is uppercase
 *@c: Character
 *
 *Return: 1 -> is uppercase 0 -> otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
