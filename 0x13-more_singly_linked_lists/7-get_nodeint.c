#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - Get the note in an specific position
 * @head: Header of the list
 * @index: position
 * Return: Null if no foun or the node if found
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = head;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
		tmp = tmp->next;
	return (tmp);
}
