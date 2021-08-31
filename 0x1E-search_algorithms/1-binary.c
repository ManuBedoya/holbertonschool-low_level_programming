#include "search_algos.h"
/**
 *binary_search - Search an elment in array binary method
 *@array: Pointer to the first elemento of array
 *@size: Number of elements
 *@value: Value to checked
 *Return: -1 if fails or the index of the value
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int) size - 1;
	int i, middle;

	if (!array)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array:");
		for (i = left; i <= right; i++)
		{
			printf(" %i", i);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
