#include <stdio.h>

/**
 *main -> Print the alphabet
 *
 *Return: Always 0
 */
int main(void)
{
	int i;
	int a = 97;
	int b = 26;

	for (i = 0; i < b ; i++)
	{
		putchar(a + i);
	}
	putchar('\n');
	return (0);
}

