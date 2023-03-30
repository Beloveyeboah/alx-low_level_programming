#include "lists.h"

/**
 * list_len - list_len writw
 * @h: the
 * Return: p
 */
size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		element++;
		h = h->next;
	}
	return (element);
}
