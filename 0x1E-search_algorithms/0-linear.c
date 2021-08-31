#include "search_algos.h"
/**
 *linear_search - Search a value in array
 *@array: Pointer to the first elemento of array
 *@size: Number of elements
 *@value: Value to checked
 *Return: -1 if fails or the index of the value
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);
	for (i = 0; i < (int) size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);

}
