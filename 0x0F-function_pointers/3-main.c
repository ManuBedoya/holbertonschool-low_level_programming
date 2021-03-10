#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of parameters
 * @argv: Array of parameters
 * Return: 0 Always
*/
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int number1, number2;

	if (argc == 4)
	{
		f = get_op_func(argv[2]);
		if (f == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		number1 = atoi(argv[1]);
		number2 = atoi(argv[3]);
		printf("%i\n", f(number1, number2));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
