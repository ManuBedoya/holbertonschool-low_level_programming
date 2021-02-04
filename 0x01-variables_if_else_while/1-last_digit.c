#include <stdlib.h>
#include <time.h>

/**
 *main -> Print the Random number and its last Digit
 *
 *Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int ld = n % 10;

	if (ld == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, ld);
	}

	else if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}

	else if (ld < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, ld);
	}
	return (0);
}
