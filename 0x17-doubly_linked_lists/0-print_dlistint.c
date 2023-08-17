#include "lists.h"


/**
 * print_dlistint - prints the element of a list
 * @h: the pointer
 * Return: the node
 */
size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", h->n);
		plus++;
		h = h->next;
	}
	return (plus);
}
