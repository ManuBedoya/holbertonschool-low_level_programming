#include "lists.h"
#include <stdlib.h>

/**
 * add_node - Add a new node to a list
 * @head:double pointer with the pointer of the list
 * @str: String of the value
 * Return: null if fail or  a pointer with the list
*/

list_t *add_node(list_t **head, const char *str)
{
	int i, j = 0;
	list_t *p = *head;

	head[j] = malloc(sizeof(list_t));

	if (head == NULL || str == NULL || head[j] == NULL)
		return (NULL);


	for (i = 0; i < str[i]; i++)
	{}

	head[j]->len = i;
	head[j]->str = (char *) str;
	head[j]->next = NULL;
	if (p == NULL)
		p = head[j];
	else
	{
		head[j]->next = p;
	}
	*head = head[j];
	return (*head);
}
