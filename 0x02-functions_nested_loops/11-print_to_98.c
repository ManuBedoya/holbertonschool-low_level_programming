#include <stdio.h>
#include "holberton.h"

/**
 *print_to_98 - print numbers
 *@n:The number
 *
 *Return: 0 Always
 */
void print_to_98(int n)
{
	int a;

	if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			if (a == 98)
			{
				printf("%d", a);
			}
			else
				printf("%d, ", a);
		}
	}
	else if (n < 98)
		for (a = n; a <= 98; a++)
		{
			if (a == 98)
			{
				printf("%d", a);
			}
			else
				printf("%d, ", a);
		}
	else
		printf("%d", n);
	printf("\n");
}
