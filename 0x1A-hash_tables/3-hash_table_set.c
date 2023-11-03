#include "hash_tables.h"

/**
 * hash_table_set - function that add an element
 * @ht: the hash_table
 * @key: the key
 * @value: the value associed with the key
 * Return: 1 if success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (ht == NULL || ht->size == 0 || key == NULL || value == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
