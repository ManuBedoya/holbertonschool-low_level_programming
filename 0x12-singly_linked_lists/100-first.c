#include <stdio.h>

/**
 * firstFunction - the function that executes first
*/
void __attribute__ ((constructor)) firstFunction()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
