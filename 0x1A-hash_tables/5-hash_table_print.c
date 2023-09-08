#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: pointer to the hash table
 * Return: anything
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int x = 0;
	unsigned char flag = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			}
			node = ht->array[x];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
				{
					printf(", ");
				}
			}
			flag = 1;
		}
	}
	printf("}\n");
}
