#include <stdio.h>

/**
 *main -> entry
 *
 *Return: 0 always
 */
int main(void)
{
	int i;
	int j;
	int limiteI = 48;

	for (i = 48; i <= 57; i++)
	{
		for (j = limiteI++; j <= 57; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (!(i == 57 && j == 56))
				{
					putchar(44);
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
