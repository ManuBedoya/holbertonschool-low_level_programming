#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free the list
 * @head: header of the list
*/
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *aux = head;

		head = head->next;
		free(aux->str);
		free(aux);
	}
}
