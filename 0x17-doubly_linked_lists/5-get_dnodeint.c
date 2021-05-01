#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int i = 0;
	if (head == NULL)
		return (NULL);
	while (aux != NULL)
	{
		if (i == index)
			return (aux);
		i++;
		aux = aux->next;
	}
	return (NULL);
}
