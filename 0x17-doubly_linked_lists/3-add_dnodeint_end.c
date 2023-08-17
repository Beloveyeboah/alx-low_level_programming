#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end
 * @head: the pointer
 * @n: the counter
 * Return: 0
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *now;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	now = *head;
	if (now)
	{
		while (now->next != NULL)
		{
			now = now->next;
		}
		now->next = new;
	}
	else
	{
		*head = new;
	}
	new->prev = now;
	return (new);
}
