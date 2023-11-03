#include "hash_tables.h"
/**
 * hash_table_print - prints a  hash table
 * @ht: the hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current;
	int flag = 0;

	if (ht ==  NULL || ht->size == 0)
	{
		return;
	}
	
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("%s: %s", current->key, current->value);
			flag = 1;
			current = current->next;
		}
	}
	printf("}\n");

}
