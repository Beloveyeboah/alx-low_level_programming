#include "lists.h"

/**
 * get_dnodeint_at_index - prints the index
 * @head: the pointer to the index
 * @index: the pointer of the idx
 * Return: idx
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t  *now;
	unsigned int pos;

	pos = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	now = head;
	while (now != NULL)
	{
		if (index == pos)
			return (now);
	pos++;
	now = now->next;
	}
	return (NULL);
}
