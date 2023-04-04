#include "lists.h"

/**
 * get_nodeint_at_index	- get_nodeint_at_index list all the nodes in a list
 *
 * @head: the pointer
 *
 * @index: the imdex
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int sun;

	for (sun = 0; sun < index; sun++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
