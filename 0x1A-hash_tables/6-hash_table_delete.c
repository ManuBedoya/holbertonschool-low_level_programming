#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 *hash_table_delete - Delete all hast table
 *@ht: header of the table
 */
void hash_table_delete(hash_table_t *ht)
{
	int i = 0;
	hash_node_t *aux;

	while (i < (int) ht->size)
	{
		while (ht->array[i])
		{
			aux = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(aux);
		}
		free(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}
