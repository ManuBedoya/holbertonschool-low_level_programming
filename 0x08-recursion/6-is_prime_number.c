#include "holberton.h"

/**
 *operation - recursive
 *@nConstant: Number
 *@nVariety: Number
 *@original: Number
 *Return: 0->false 1->True
 **/
int operation(int nConstant, int nVariety, int original)
{
	if (nConstant == 1)
		return (1);
	else if (nConstant * nVariety == original)
		return (0);
	if (nConstant == nVariety)
		return (operation(nConstant - 1, 2, original));
	else
		return (operation(nConstant, nVariety + 1, original));

}
/**
 *is_prime_number - Call the function recursive
 *@n: Number
 *Return: 0->False 1->True
 */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1 || n > 1000)
		return (0);
	return (operation(n, 2, n));
}
