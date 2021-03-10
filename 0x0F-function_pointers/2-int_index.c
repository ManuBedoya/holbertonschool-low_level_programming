#include "function_pointers.h"

/**
 * int_index - Function that travels an array and use cmp
 * @array: Arrray
 * @size: Array's size
 * @cmp: Pointer of the function
 * Return: -1->No matches or size is less than 0 i->position
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{

		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	return (-1);
}
