#include <stdio.h>
#include "hash_tables.h"

/**
 *counter - Count how many keys there are
 *@hash: header of the table
 *Return: number of the keys in table
 */
unsigned long int counter(const hash_table_t *hash)
{
	unsigned long int count = 0, i;


	for (i = 0; i < hash->size; i++)
		if (hash->array[i] != NULL)
			count++;

	return (count);
}

/**
 *hash_table_print - Print the hash table
 *@ht: Header of the table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j, count;
	hash_node_t *aux;

	count = counter(ht);
	j = 0;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			aux = ht->array[i];
			while (aux)
			{
				printf("'%s': '%s'", aux->key, aux->value);
				aux = aux->next;
				if ((j != count) && aux)
					printf(", ");
				j++;
			}
		}
	}
	printf("}\n");
}
