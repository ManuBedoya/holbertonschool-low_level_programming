#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - store the value of the first node
 * @head: Double pointer in one is the list
 * Return: the value of the n in the first node or 0 is empty list
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int result = tmp->n;

	if (head == NULL)
		return (0);

	*head = tmp->next;
	free(tmp);
	return (result);
}
