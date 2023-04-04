#include "lists.h"

/**
 * free_listint2 - free_listint2 prints alll
 *
 * @head: tje pointer
 *
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *vin;

	if (head ==  NULL)
		return;
	while (*head)
	{
		vin = (*head)->next;
		free(*head);
		*head = vin;
	}
	head = NULL;
}
