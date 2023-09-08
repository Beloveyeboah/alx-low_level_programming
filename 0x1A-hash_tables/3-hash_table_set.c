#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table
 * @ht: the item
 * @key: the key
 * @value: the value of the key
 * Return: 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	unsigned long int i = 0;
	hash_node_t *node = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	for (i = 0; key[i]; i++)
	{
		index += key[i];
	}
	index = index % ht->size;
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (node->key == NULL || node->value == NULL)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
