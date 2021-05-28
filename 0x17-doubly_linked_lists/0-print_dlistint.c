#include "lists.h"
#include <stdio.h>
/**
 *print_dlistint - print the list
 *@h: header of the list
 *Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	dlistint_t *aux = (dlistint_t *) h;

	if (h == NULL)
		return (0);
	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
		count++;
	}
	return (count);
}
