#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Add a new node to a list
 * @head:double pointer with the pointer of the list
 * @str: String of the value
 * Return: null if fail or  a pointer with the list
*/

list_t *add_node(list_t **head, const char *str)
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
		aux->next = p;
		*head = aux;
	}
	return (aux);
}
