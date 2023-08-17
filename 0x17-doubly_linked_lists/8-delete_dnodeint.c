#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a data at a given idx
 * @head: the pointer
 * @index: the specified index
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p;
	dlistint_t *px;
	unsigned int i;

	p = *head;
	if (p)
	{
		while (p->prev != NULL)
			p = p->prev;
	}
	i = 0;
	while (p)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = p->next;
				if (*head != NULL)
				{
					(*head)->prev = NULL;
				}

			}
			else
			{
				px->next = p->next;
				if (p->next != NULL)
					p->next->prev = px;
			}
			free(p);
			return (1);
		}
		px = p;
		p = p->next;
		i++;
	}
	return (-1);
}
