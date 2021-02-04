#include <stdio.h>

/**
 *main -> entry
 *
 *Return: 0 always
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (!(a == 'e' || a == 'q'))
		{
			putchar(a);
		}
	}
	return (0);
}
