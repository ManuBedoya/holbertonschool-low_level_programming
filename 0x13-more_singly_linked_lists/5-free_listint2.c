#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free a list
 * @head: Doucble pointer where one pinter is the header of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		(*head) = tmp;
	}
	head = NULL;
}
