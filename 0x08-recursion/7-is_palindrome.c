#include "holberton.h"
#include <string.h>

/**
 *is_palindromeAux - Veriify if a string is palindrome
 *@s: String
 *@i: Init
 *@e: End
 *Return: 1->yes 0->No
 */
int is_palindromeAux(char *s, int i, int e)
{
	if ((i == e) || (strlen(s) % 2 == 0 && i + 1 == e))
		return (1);
	if (s[i] == s[e])
		return (is_palindromeAux(s, i + 1, e - 1));
	else
		return (0);
}
/**
 *is_palindrome - Veriify if a string is palindrome
 *@s: String
 *Return: 1->yes 0->No
 */
int is_palindrome(char *s)
{
	if (s[0] == '\0')
		return (1);
	else if (s[0] == s[strlen(s) - 1])
	{
		return (is_palindromeAux(s, 0, strlen(s) - 1));
	}
	else
		return (0);
}
