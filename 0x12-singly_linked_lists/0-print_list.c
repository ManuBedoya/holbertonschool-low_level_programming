#include <stdio.h>
#include "lists.h"

/**
 * print_list - list all the elements of the list
 * @h: header of the list
 * Return: number of the elments of the list or 0 if fails
 */
size_t print_list(const list_t *h)
{
	size_t nNodes = 0;
	const list_t *tmp = h;

	if (tmp == NULL)
		return (0);

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
		nNodes++;
	}

	return (nNodes);
}
