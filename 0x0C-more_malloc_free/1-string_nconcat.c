#include "holberton.h"
#include <stdlib.h>

/**
 *string_nconcat - Concatanate 2 strings
 *@s1: String1
 *@s2: String2
 *@n: Limit
 *Return: String with the 2 concatanates
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k = 0, len2 = 0, len1 = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] || s2[len2])
	{
		if (s1[len1])
			len1++;
		if (s2[len2])
			len2++;
	}
	len1++;
	if (n >= len2)
		n = len2;
	s3 = malloc((len2 + n) * sizeof(char));

	if (s3 == NULL)
		return (NULL);
	for (k = 0; s1[k]; k++)
		s3[k] = s1[k];
	for (; (k - len1) + 1 < n && s2[k - len1 + 1]; k++)
		s3[k] = s2[k - len1 + 1];
	s13[k] = '\0';
	return (s3);
}
