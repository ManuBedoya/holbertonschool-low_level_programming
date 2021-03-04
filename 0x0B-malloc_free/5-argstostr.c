#include "holberton.h"
#include <stdlib.h>

/**
 **argstostr - fill the string with the arguments
 *@ac: number of arguments
 *@av: array of arguments
 *Return: array with all arguments
 */

char *argstostr(int ac, char **av)
{
	int i = 0, count = 0, j = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; av[i]; i++)
		for (j = 0; av[i][j]; j++)
			count++;

	s = malloc(count + (ac + 1) * sizeof(char) + ac);

	if (s == NULL)
		return (NULL);

	count = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[count] = av[i][j];
			count++;
		}
		s[count] = '\n';
		count++;
	}
	return (s);
}
