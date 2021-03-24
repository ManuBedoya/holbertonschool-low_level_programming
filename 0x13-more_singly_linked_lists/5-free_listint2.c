#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free a list
 * @head: Doucble pointer where one pinter is the header of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	while (tmp != NULL)
	{
		listint_t *tmp2 = tmp;

		tmp = tmp->next;
		free(tmp2);
		*head = NULL;
	}
}
