#include "lists.h"

/**
 * sum_listint - sum_listint list all
 *
 * @head: the pointer
 *
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
