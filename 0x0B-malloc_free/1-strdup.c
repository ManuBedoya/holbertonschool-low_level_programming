#include "holberton.h"
#include "stdlib.h"

/**
 *_strdup - Duplicate a String
 *@str: String1
 *Return: String2 (Duplicated)
 */

char *_strdup(char *str)
{
	int i = 0, count = 0;
	char *str2;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	str2 = malloc((count + 1) * sizeof(char));

	if (str2 == NULL)
		return (NULL);

	*str2 = *str;

	for (i = 1; str[i] != '\0'; i++)
	{
		str2[i] = str[i];
	}
	return (str2);
}
