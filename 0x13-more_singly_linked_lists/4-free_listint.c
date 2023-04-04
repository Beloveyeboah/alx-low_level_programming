#include "lists.h"

/**
 * free_listint - free_listint free
 *
 * @head: the pointer
 *
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *vin;

	while (head)
	{
		vin = head->next;
		free(head);
		head = vin;
	}
}
