#include "hash_tables.h"

/**
 * insert_node - function that insert a node
 * @key: the key
 * @value: the value associed with the key
 * Return: the new_node or NULL if failed
 */
hash_node_t *insert_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - function that add an element
 * @ht: the hash_table
 * @key: the key
 * @value: the value associed with the key
 * Return: 1 if success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;
	char *dup_value;

	if (ht == NULL || ht->size == 0 || key == NULL
		|| strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
		{
			dup_value = strdup(value);
			if (dup_value == NULL)
				return (0);
			free(current->value);
			current->value = dup_value;
			return (1);
		}
		current = current->next;
	}
	new_node = insert_node(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
