#include "lists.h"

/**
 * dlistint_len - returns the length of list
 * @h: the pointer
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
	int plus;

	plus = 0;
	if (h == NULL)
	{
		return (plus);
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		plus++;
		h = h->next;
	}
	return (plus);
}
