#include <stdio.h>

/**
 *main -> entry
 *
 *Return: 0 always
 */
int main(void)
{
	int a;
	char b[] = "0123456789abcdf";

	for (a = 0; a <= 16; a++)
	{
		putchar(b[a]);
	}
	putchar('\n');
	return (0);
}
