#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main -> Take a Random number and says if is positive negative or zero
*
*
*Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);
}

