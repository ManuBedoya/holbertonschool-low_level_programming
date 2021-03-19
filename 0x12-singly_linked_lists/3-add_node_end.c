#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Add a new node in the end of the list
 * @head: the header of the list
 * @str: String of the value in the strict
 * Return: null if fails or the address of the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *p = *head;
	char *straux = strdup(str);

	list_t *aux = malloc(sizeof(list_t));

	if (head == NULL || str == NULL || aux == NULL)
		return (NULL);


	for (i = 0; i < str[i]; i++)
	{}

	aux->len = i;
	aux->str = straux;
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
	return (aux);
}
