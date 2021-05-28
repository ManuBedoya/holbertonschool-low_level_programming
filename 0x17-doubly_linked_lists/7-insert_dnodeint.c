#include "lists.h"
/**
 *insert_dnodeint_at_index - insert node a the index
 *@h: header of the list
 *@idx: index
 *@n: value of the new node
 *Return: Address of the new node or null if fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *aux, *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	if (h == NULL || *h == NULL)
	{
		free(node);
		return (NULL);
	}
	aux = *h;
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
	free(node);
	return (NULL);
}
