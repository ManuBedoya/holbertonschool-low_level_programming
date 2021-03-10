#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - Function that determinate the function
 * @s: operator
 * Return: NULL if don't match otherwise a function depends of the operator
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (ops[i].op[0] == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
