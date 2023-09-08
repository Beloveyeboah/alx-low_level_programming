#include "hash_tables.h"

/**
 * hash_table_create - function to create the hashtable
 * @size: the size ot the table
 * Return: size of the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int r = 0;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_table_t) * size);

	if (ht->array == NULL)
	{
		return (NULL);
	}
	while (r < size)
	{
		ht->array[r] = NULL;
		r++;
	}

	return (ht);
}
