#include <stdio.h>

/**
 *main -> entry
 *
 *Return: 0 Always
 */
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
		if (number != 57)
		{
		putchar(44);
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
