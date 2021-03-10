#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that add 2 integers
 * @a: Integer1
 * @b: Integer2
 * Return: result
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that sub 2 integers
 * @a: Integer1
 * @b: Integer2
 * Return: result
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that mul 2 integers
 * @a: Integer1
 * @b: Integer2
 * Return: result
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that div 2 integers
 * @a: Integer1
 * @b: Integer2
 * Return: result
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}
/**
 * op_mod - function that mod 2 integers
 * @a: Integer1
 * @b: Integer2
 * Return: result
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}
