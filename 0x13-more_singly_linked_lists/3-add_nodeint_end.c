#include "lists.h"

/**
 * add_nodeint_end - add_nodeint_end prints from end
 *
 * @head: pointer
 *
 * @n: integet
 *
 * Return: o
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ban, *end;

	ban = malloc(sizeof(listint_t));
	if (ban == NULL)
		return (NULL);
	ban->n = n;
	ban->next = NULL;
	if (*head == NULL)
		*head = ban;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = ban;
	}
	return (*head);
}
