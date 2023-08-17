#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at the index
 * @h: the pointe to the node
 * @idx: the index
 * @n: the date to be inserted
 * Return: 1
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head;
	unsigned int size;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;
		size = 1;
		if (head)
			while (head->prev != NULL)
				head = head->prev;
		while (head)
		{
			if (size == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			size++;
		}
	}
	return (new);
}
