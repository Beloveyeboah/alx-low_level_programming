#include "lists.h"

/**
 * print_listint - print_listint primts list
 *
 * @h: the head
 *
 * Return: node
 */
size_t print_listint(const listint_t *h)
{
	size_t pin = 0;

	while (h)
	{
		pin++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (pin);
}

