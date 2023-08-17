#include "lists.h"

/**
 * add_dnodeint - add a node at the beginng
 * @n: the counter
 * @head: the pointer
 * Return: node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *now;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	now = *head;

	if (now != NULL)
	{
		while (now->prev != NULL)
			now = now->prev;
	}
	new->next = now;
	if (now)
	{
		now->prev = new;
	}
	*head = new;
	return (new);
}
