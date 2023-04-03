#include "lists.h"

/**
 * listint_len - listint_len list all
 *
 * @h: pointer
 *
 * Return: nothing
 */
size_t listint_len(const listint_t *h)
{
	size_t pin = 0;

	while (h)
	{
		pin++;
		h = h->next;
	}
	return (pin);
}
