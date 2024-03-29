#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: gh
 */
size_t free_listint_safe(listint_t **h)
{
	size_t sun = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			sun++;
		}
		else
		{
			free(*h);
			*h = NULL;
			sun++;
			break;
		}
	}
	*h = NULL;
	return (sun);
}
