#include "lists.h"

/**
 * pop_listint - pop_listint list
 *
 * @head: the point
 *
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *run;
	int pas;

	if (*head == NULL)
		return (0);
	run =  *head;
	pas = (*head)->n;
	*head = (*head)->next;
	free(run);
	return (pas);
}
