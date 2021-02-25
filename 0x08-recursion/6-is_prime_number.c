#include "holberton.h"

/**
 *operation - recursive
 *@nVariety: Number
 *@original: Number
 *Return: 0->false 1->True
 **/
int operation(int nVariety, int original)
{
	if (nVariety * nVariety == original)
		return (0);
	else if (nVariety * nVariety > original)
		return (1);
	else
		return (operation(nVariety + 1, original));

}
/**
 *is_prime_number - Call the function recursive
 *@n: Number
 *Return: 0->False 1->True
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (operation(1, n));
}
