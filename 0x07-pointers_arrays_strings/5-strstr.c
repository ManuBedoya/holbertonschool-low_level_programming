#include "holberton.h"

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

	for (i = 0; haystack[i]; haystack++)
	{
		while (haystack[i] && needle[i] && haystack[i] == needle[i])
		{
			i++;
		}
		if (!needle[i])
			return (haystack);
	}
	return ('\0');
}
