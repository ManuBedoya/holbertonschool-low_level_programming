#include "lists.h"
/**
 * listint_len - calculate the lenght of the list
 * @h: header of the list
 * Return: lenght of the list
*/
size_t listint_len(const listint_t *h)
{
	size_t length = 0;
	const listint_t *tmp = h;

	if (h == NULL)
		return (0);
	while (tmp != NULL)
	{
		length++;
		tmp = tmp->next;
	}
	return (length);
}
