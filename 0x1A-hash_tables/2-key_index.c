#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: the index of the key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index = hash_djb2(key) % size;

	return (index);
}
