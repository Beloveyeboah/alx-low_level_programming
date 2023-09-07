#include "hash_tables.h"

/**
 * hash_table_create - function to create the hashtable
 * @size: the size ot the table
 * Return: size of the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *item;
	unsigned long int i = 0;

	item = malloc(sizeof(hash_table_t));
	if (item == NULL)
		return (NULL);
	item->size = size;
	item->array = malloc(sizeof(hash_node_t *) * size);
	if (item->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		item->array[i] = NULL;
	return (item);
}
