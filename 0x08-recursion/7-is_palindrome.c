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


/**
 *is_palindromeAux - Veriify if a string is palindrome
 *@s: String
 *@i: Init
 *@e: End
 *Return: 1->yes 0->No
 */
int is_palindromeAux(char *s, int i, int e)
{
	if ((i == e) || (_strlen_recursion(s) % 2 == 0 &&
			 i + 1 == e))
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
	else if (s[0] == s[_strlen_recursion(s) - 1])
	{
		return (is_palindromeAux(s, 0,
					 _strlen_recursion(s) - 1));
	}
	else
		return (0);
}

