#include "lists.h"
/**
 *delete_dnodeint_at_index - delete node
 *@head: header of the list
 *@index: position
 *Return: -1 if fails or 1 if works
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if ((*head)->prev == NULL)
	{
		if ((*head)->next == NULL)
		{
			return (-1);
		}
		*head = (*head)->next;
		(*head)->prev = NULL;
		return (1);
	}
	while (aux != NULL)
	{
		if (i == index)
		{
			aux->prev->next = aux->next;
			aux->next->prev = aux->prev;
			free(aux);
			return (1);
		}
		aux = aux->next;
		i++;
	}
	return (-1);
}
