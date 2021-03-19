#include <stdio.h>

/**
 * firstFunction - the function that executes first
*/
void __attribute__ ((constructor)) firstFunction()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}


/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("(A tortoise, having pretty good sense ");
	printf("of a hare's nature, challenges one to a race.)\n");
	return (0);
}
