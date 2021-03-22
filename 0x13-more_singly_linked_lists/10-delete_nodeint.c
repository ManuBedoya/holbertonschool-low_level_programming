#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete a node in a specific position
 * @head: Doucle pointer where one is the head of the list
 * @index: position for the new node
 * Return: 1 success or -1 no succes
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *tmp2;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	tmp2 = tmp->next;
	tmp->next = tmp2->next;
	free(tmp2);
	return (1);
}
