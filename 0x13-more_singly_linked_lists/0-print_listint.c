#include <stdio.h>
#include "lists.h"
/**
 * print_listint -> print list of integers
 * @h: header of the list
 * Return: Number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int nNodes = 0;
	const listint_t *tmp = h;

	if (h == NULL)
		return (0);
	while (tmp != NULL)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->next;
		nNodes++;
	}

	return (nNodes);
}
