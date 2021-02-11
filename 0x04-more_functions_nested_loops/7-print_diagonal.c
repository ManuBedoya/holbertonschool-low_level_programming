#include "holberton.h"

/**
 *print_diagonal - print / in way diagonal
 *@n: number
 *
 */
void print_diagonal(int n)
{
	int i;
	int iaux;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			iaux = 0;
			while (iaux <= i && i != n - 1)
			{
				_putchar(' ');
				iaux++;
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
