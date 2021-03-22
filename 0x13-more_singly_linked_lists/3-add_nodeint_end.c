#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Adding a node in the end of the list
 * @head: Pointer to a header of the list
 * @n: value n in the new node
 * Return: Null if fails or the addres of the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *pointer = *head;
	listint_t *tmp = malloc(sizeof(listint_t));

	if (head == NULL || tmp == NULL)
		return (NULL);
	tmp->n = (int)n;
	tmp->next = NULL;
	if (pointer == NULL)
		*head = tmp;
	else
	{
		while (pointer->next != NULL)
			pointer = pointer->next;
		pointer->next = tmp;
	}
	return (tmp);
}
