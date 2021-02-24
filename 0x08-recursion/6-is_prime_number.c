#include "holberton.h"

/***/
int is_prime_number(int n)
{
	if (n == 0)
		return (1);
	else if (n == 1)
		return (0);

	if (is_prime_number(n - 2) *
	    is_prime_number(n - 1) == 7)
		return (0);
	else
		return is_prime_number(n - 1);
}
