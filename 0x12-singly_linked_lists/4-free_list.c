#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free the list
 * @head: header of the list
*/
void free_list(list_t *head)
{
	list_t *aux = head;

	while (head->next != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
	free(aux);
}
