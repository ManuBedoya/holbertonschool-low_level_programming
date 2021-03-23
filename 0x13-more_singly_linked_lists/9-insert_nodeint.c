#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert a node in a specific position
 * @head: Doucle pointer where one is the head of the list
 * @idx: position for the new node
 * @n: Value of the new node
 * Return: NULL if fails or the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *newNode = malloc(sizeof(listint_t));
	unsigned int i;

	if (head == NULL || *head == NULL || newNode == NULL)
		return (NULL);
	for (i = 0; i < (idx - 1) && tmp->next; i++)
	{
		tmp = tmp->next;
	}
	newNode->n = n;
	newNode->next = tmp->next;
	tmp->next = newNode;
	return (newNode);
}
