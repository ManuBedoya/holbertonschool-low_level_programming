#include "holberton.h"
#include "stdlib.h"

/**
 *_strdup - Duplicate a String
 *@str: String1
 *Return: String2 (Duplicated)
 */

char *_strdup(char *str)
{
	int i = 0;
	char *str2;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++);

	str2 = malloc((i + 1) * sizeof(char));

	if (str2 == NULL)
		return (NULL);


	for (i = 0; str[i] != '\0'; i++)
	{
		str2[i] = str[i];
	}
	return (str2);
}
