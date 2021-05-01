#include "lists.h"
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		while (head != NULL)
		{
			dlistint_t *aux = head;
			head = head->next;
			free(aux);
		}
	}
}
