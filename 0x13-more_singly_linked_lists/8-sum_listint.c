#include "lists.h"
/**
 * sum_listint - calculate sum of the all values n of the list
 * @head: header of the list
 * Return: sum of the list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
