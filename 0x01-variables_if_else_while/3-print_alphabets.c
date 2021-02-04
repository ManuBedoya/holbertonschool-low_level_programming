#include <stdio.h>

/**
 *main -> print Alphabet in lower and UpperCase
 *
 *Return: 0 always
 */
int main(void)
{
	int a = 97;

	for (a; a < 123; a++)
	{
		putchar(a);
	}

	a = 65;

	for (a; a < 91; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
