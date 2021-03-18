#include "lists.h"

/**
 * list_len - determine the lenght of the list
 * @h: header of the list
 * Return: 0 if failas or  number of elements
*/
size_t list_len(const list_t *h)
{
	size_t nElements = 0;
	const list_t *tmp = h;

	if (tmp == NULL)
		return (0);

	while (tmp != NULL)
	{
		tmp = tmp->next;
		nElements++;
	}

	return (nElements);
}
