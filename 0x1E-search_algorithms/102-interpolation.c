#include "search_algos.h"
/**
 *interpolation_search - interpolation method
 *@array: Ponter the first element to array
 *@size: number of elements
 *@value: Value to search
 *Return: -1 if fails or the index of the element
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = (int) size - 1, mid;

	if (!array)
		return (-1);
	while ((array[high] != array[low]) && (value >= array[low]) &&
	      (value <= array[high]))
	{
		mid = low + ((value - array[low]) * (high - low) /
			     (array[high - array[low]]));
		printf("Value checked array[%i] = [%i]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}
	if (value == array[low])
		return (low);
	return (-1);
}
