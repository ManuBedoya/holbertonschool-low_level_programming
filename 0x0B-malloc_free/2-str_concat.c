#include "holberton.h"
#include "stdlib.h"

/**
 **str_concat - Concatenate 2 Strings
 *@s1: String1
 *@s2: String2
 *Return: String concatanate with s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *s3;

	for (i = 0; s1[i]; i++)
	{}

	for (j = 0; s2[j]; j++)
	{}

	s3 = malloc((i + j + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s3[i] = s1[i];

	for (j = 0; s2[j]; j++)
		s3[i++] = s2[j];

	return (s3);
}
