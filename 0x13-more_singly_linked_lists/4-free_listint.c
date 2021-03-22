#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free all the list
 * @head: header of the list
*/
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *tmp = head;

		head = head->next;
		free(tmp);
	}
}
