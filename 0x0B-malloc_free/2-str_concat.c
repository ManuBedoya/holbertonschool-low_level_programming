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
	int sizeS1 = 0, sizeS2 = 0, i = 0, j = 0;
	char *s3 = "";

	if (s1 == NULL || s2 == NULL)
		return (s3);

	for (i = 0; s1[i]; i++)
		sizeS1++;
	for (i = 0; s2[i]; i++)
		sizeS2++;

	s3 = (char *) malloc((sizeS1 + sizeS2) * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeS1; i++)
		s3[i] = s1[i];
	for (j = 0; j < sizeS2; j++)
		s3[i++] = s2[j];
	return (s3);
}
