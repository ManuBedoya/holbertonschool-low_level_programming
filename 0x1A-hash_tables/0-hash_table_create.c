#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 *hash_table_create - create the hash table
 *@size: Is the lenght of the table
 *Return: return the pointer of table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	hash_node_t **array;
	unsigned long int i;

	new_hash_table = malloc(sizeof(hash_table_t));
	array = malloc(sizeof(hash_node_t) * size);
	if (array == NULL || new_hash_table == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = NULL;
	}


	new_hash_table->size = size;
	new_hash_table->array = array;


	return (new_hash_table);
}
