#include "holberton.h"

/**
 *_islower - return 1 if the letter c is a lowercase character else return 0
 *@c: parameter a character
 *
 *Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
