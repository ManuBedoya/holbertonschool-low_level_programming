#include "lists.h"
/**
 *add_dnodeint_end - add a new node in the end of the list
 *@head: The header of the list
 *@n: The value of the new node
 *Return: NULL if fails or the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *aux = *head;

	if (head == NULL)
		return (NULL);
	node->prev = NULL;
	node->next = NULL;
	node->n = (int) n;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = node;
	node->prev = aux;
	return (node);
}
