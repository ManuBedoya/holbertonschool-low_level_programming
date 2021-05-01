#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *aux = *h, *node = malloc(sizeof(dlistint_t));

	if (h == NULL && *h == NULL && idx != 0)
		return (NULL);
	node->prev = NULL;
	node->next = NULL;
	node->n = n;
	while (aux != NULL)
	{
		if (i == idx)
		{
			aux->prev->next = node;
			node->next = aux;
			node->prev = aux->prev;
			aux->prev = node;
			return (node);
		}
		aux = aux->next;
		i++;
	}
	return (NULL);
}
