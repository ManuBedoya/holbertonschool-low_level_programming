#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 *scounter - Count how many keys there are
 *@hash: header of the table
 *Return: number of the keys in table
 */
unsigned long int scounter(const shash_table_t *hash)
{
	unsigned long int count = 0, i;


	for (i = 0; i < hash->size; i++)
		if (hash->array[i] != NULL)
			count++;

	return (count);
}

/**
 *shash_table_create - create the hash table
 *@size: Is the lenght of the table
 *Return: return the pointer of table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_hash_table;
	shash_node_t **array;
	unsigned long int i;

	new_hash_table = malloc(sizeof(shash_table_t));
	array = malloc(sizeof(shash_node_t) * size);
	if (array == NULL || new_hash_table == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = NULL;
	}


	new_hash_table->size = size;
	new_hash_table->array = array;
	new_hash_table->shead = NULL;
	new_hash_table->stail = NULL;


	return (new_hash_table);

}

/**
 *shash_table_set - create a new_node
 *@ht: Header of the table
 *@key: key
 *@value: Key's value
 *Return: 1 -> sucess or 0 -> fails
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node;
	char *value_copy, *key_copy;
	int size, index;

	if (ht == NULL)
		return (0);

	size = ht->size;
	index = key_index((const unsigned char *) key, size);

	value_copy = (char *) value;
	key_copy = (char *) key;
	new_node = malloc(sizeof(shash_node_t));

	if (key_copy == NULL || new_node == NULL)
		return (0);

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;
	new_node->sprev = NULL;
	new_node->snext = NULL;
	if (ht->array[index] != NULL)
		new_node->next = ht->array[index];

	ht->array[index] = new_node;
	new_node->next = ht->stail;
	ht->stail = new_node;

	if (scounter(ht) == 0)
		ht->shead = new_node;
	return (1);

}

/**
 *shash_table_get - Get the value of a key in array
 *@ht: header of the table
 *@key: key
 *Return: The key's value or NULL if the key doesn't exit
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int size = ht->size;
	unsigned long int index = key_index((const unsigned char *) key, size);
	shash_node_t *aux;

	if (!ht->array[index])
		return (NULL);
	aux = ht->array[index];
	while (aux)
	{
		if (aux->key == (char *) key)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}

/**
 *shash_table_print - Print the hash table
 *@ht: Header of the table
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i, j, count;

	count = scounter(ht);
	j = 0;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			printf("'%s': '%s'", ht->array[i]->key,
			       ht->array[i]->value);
			if (j != count)
				printf(", ");
			j++;
		}
	}
	printf("}\n");
}

/**
 *shash_table_print_rev - Print the hash table in reverse
 *@ht: Header of the table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i, j, count;

	count = scounter(ht);
	j = 0;
	printf("{");

	for (i = ht->size - 1; i > 0; i--)
	{
		if (ht->array[i])
		{
			printf("'%s': '%s'", ht->array[i]->key,
			       ht->array[i]->value);
			if (j != count)
				printf(", ");
			j++;
		}
	}
	printf("}\n");
}

/**
 *shash_table_delete - Delete all hast table
 *@ht: header of the table
 */
void shash_table_delete(shash_table_t *ht)
{
	int i = 0;

	while (i < (int) ht->size)
	{
		free(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht->shead);
	free(ht);
}
