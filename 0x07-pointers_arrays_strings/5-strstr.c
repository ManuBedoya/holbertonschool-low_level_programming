#include "holberton.h"

/**
 *wordExist - Foun a Word
 *
 *@haystack:  haystack
 *@needle: needle
 *@i: i
 *Return: char*
 */
char *wordExist(char *haystack, char *needle, int i)
{
	int j;

	for (j = 0; j < i; j++)
		haystack++;

	char *aux = haystack;
	int k = 0;

	for (j = 0; needle[j]; j++)
	{
		if (haystack[k] == needle[j])
			k++;
		else
			return (aux);
	}
	return (haystack);
}

/**
 *_strstr - Start since a word
 *
 *@haystack: haystack
 *@needle: needle
 *Return:  char*
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *res;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			res = wordExist(haystack, needle, i);
			if (res[0] == needle[0])
				return (res);
		}
	}
	return ('\0');
}
