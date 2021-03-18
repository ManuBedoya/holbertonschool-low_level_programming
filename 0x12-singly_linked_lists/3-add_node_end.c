#include "lists.h"
#include <stdlib.h>

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *p = *head;

	list_t *aux = malloc(sizeof(list_t));

	if (head == NULL || str == NULL || aux == NULL)
		return (NULL);


	for (i = 0; i < str[i]; i++)
	{}

	aux->len = i;
	aux->str = (char *) str;
	aux->next = NULL;
	if (p == NULL)
	{
		*head = aux;
	}
	else
	{
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = aux;
	}
	return (*head);
}