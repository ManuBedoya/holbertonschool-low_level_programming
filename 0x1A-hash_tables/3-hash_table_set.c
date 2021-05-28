#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 *hash_table_set - create a new_node
 *@ht: Header of the table
 *@key: key
 *@value: Key's value
 *Return: 1 -> sucess or 0 -> fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *new_node;
	char *value_copy, *key_copy;
	int size, index;

	if (ht == NULL)
		return (0);

	size = ht->size;
	index = key_index((const unsigned char *) key, size);

	value_copy = (char *) value;
	key_copy = (char *) key;
	new_node = malloc(sizeof(hash_node_t));

	if (strcmp(key_copy, "") || new_node == NULL)
		return (0);

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;
	if (ht->array[index] != NULL)
		new_node->next = ht->array[index];

	ht->array[index] = new_node;
	return (1);
}
