#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - travels an array and call a function
 * @array: Array
 * @size: Array's size
 * @action: The function that print
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
