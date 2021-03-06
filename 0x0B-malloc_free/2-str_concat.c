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
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{}

	for (j = 0; s2[j]; j++)
	{}

	s3 = malloc((i + j + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	for (k = 0; s1[k]; k++)
		s3[k] = s1[k];

	for (l = 0; s2[l]; l++)
	{
		s3[k] = s2[l];
		k++;
	}

	return (s3);
}
