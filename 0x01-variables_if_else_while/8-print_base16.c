#include <stdio.h>

/**
 *main -> entry
 *
 *Return: 0 always
 */
int main(void)
{
	int i;
	char hex[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hex[i]);
	}
	putchar('\n');
	return (0);
}
